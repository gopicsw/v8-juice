//    Author: stephan beal <stephan@s11n.net>
//    License: Public Domain

#include <iostream>
#include <set>

#include <v8/juice/PathFinder.h>
#include <v8.h>
#include <v8/juice/bind.h>
#include <v8/juice/convert.h>
#include <v8/juice/plugin.h>
#include <v8/juice/cleanup.h>
#include <v8/juice/ClassBinder.h>


#ifndef CERR
#include <iostream> /* only for debuggering */
#define CERR std::cerr << __FILE__ << ":" << std::dec << __LINE__ << " : "
#endif

namespace v8 { namespace juice {
    using namespace ::v8::juice::bind;
    using namespace ::v8::juice::convert;
#define JSTR(X) String::New(X)
#define TOSS(X) ThrowException(JSTR(X))

    enum {
    MagicExternalArgc = 1 // must be 1 or else crash
    };
    /** Required specialization of WeakJSClassCreatorOps<> for use
	with WeakJSClassCreator<PathFinder>. */
    template <>
    struct WeakJSClassCreatorOps<PathFinder>
    {
        typedef std::set<PathFinder*> PFSet;
        /**
           All PathFinders which should be deleted by
           this type (that depends on how the ctor is called)
           are added here. Only dtors called for these objects
           will trigger a delete.
        */
        static PFSet & pfset()
        {
            static PFSet pf;
            return pf;
        }
	enum { ExtraInternalFieldCount = 0 };
	typedef PathFinder WrappedType;
	static char const * ClassName() { return "PathFinder"; }
	static WrappedType * Ctor( Arguments const & argv,
				   std::string & exceptionText)
	{
	    const int argc = argv.Length();
	    if( (MagicExternalArgc == argc) && argv[0]->IsExternal() )
	    { // assume arg is an externally-owned PathFinder instance
		Local<External> ex( External::Cast( *argv[0] ) );
                WrappedType * xp = bind::GetBoundNative<PathFinder>( ex->Value() );
		if( xp )
		{
		    //CERR << ClassName() << "() ctor creating from external instance @"<<xp<<"\n";
		    return xp;
		}
		else
		{
		    exceptionText = "First argument to ctor failed type check!";
		    return 0;
		}
	    }
	    std::string a0 = (argc>0) ? JSToStdString(argv[0]) : "";
	    std::string a1 = (argc>1) ? JSToStdString(argv[1]) : "";
	    std::string a2 = (argc>2) ? JSToStdString(argv[2]) : ":";
	    //CERR << ClassName()<< "(["<<a0<<"], ["<<a1<<"], ["<<a2<<"])\n";
	    WrappedType * pf = new WrappedType( a0, a1, a2 );
	    if( pf )
	    {
                pfset().insert( pf );
		cleanup::AddToCleanup(pf, cleanup_callback );
	    }
            //CERR << ClassName() << "() ctor created " << pf << '\n';
	    return pf;
	}

	static void Dtor( WrappedType * obj )
	{
	    if( obj )
	    {
                bind::UnbindNative( obj, obj );
		cleanup::RemoveFromCleanup(obj);
                PFSet::iterator it = pfset().find(obj);
                if( it != pfset().end() )
                {
                    //CERR << ClassName() << " dtor deleting on @"<<obj<<'\n';
                    pfset().erase(it);
                    delete obj;
                }
	    }
	}
    private:
	/** Callback for use with juice::cleanup::AddToCleanup(). */
	static void cleanup_callback( void * obj )
	{
	    Dtor( static_cast<WrappedType*>(obj) );
	}
    };

}} // namespaces

#define WEAK_CLASS_TYPE v8::juice::PathFinder
#include <v8/juice/WeakJSClassCreator-CastOps.h>

namespace v8 { namespace juice {


    Handle<Value> SetupPathFinderClass(Handle<Object> target )
    {
	HandleScope scope;
	typedef ClassBinder<PathFinder> PW;
	PW pw(target);
	typedef PW::WrappedType PF;
	pw.BindMemFunc< std::string, &PF::PathString >( "pathString" );
	pw.BindMemFunc< size_t, std::string const &, &PF::Path >( "setPathString" );
	pw.BindMemFunc< PathFinder::StringList, &PF::Path >( "pathArray" );
	pw.BindMemFunc< size_t, PathFinder::StringList const &, &PF::Path >( "setPathArray" );
	pw.BindMemFunc< std::string, &PF::PathSeparator >( "pathSeparator" );
	pw.BindMemFunc< void, std::string const &, &PF::PathSeparator >( "setPathSeparator" );
	pw.BindMemFunc< PathFinder::StringList, &PF::Extensions >( "extensionsArray" );
	pw.BindMemFunc< size_t, PathFinder::StringList const &, &PF::Extensions >( "setExtensionsArray" );
	pw.BindMemFunc< std::string, &PF::ExtensionsString >( "extensionsString" );
	pw.BindMemFunc< size_t, const std::string &, &PF::Extensions >( "setExtensionsString" );
	pw.BindMemFunc< void, std::string const &, &PF::AddPath >( "addPathString" );
	pw.BindMemFunc< void, std::string const &, &PF::AddExtension >( "addExtensionString" );
	pw.BindMemFunc< std::string, std::string const &, &PF::Find >( "find" );
	pw.BindMemFunc< void, &PF::ClearCache >( "clearCache" );
	pw.BindMemFunc< bool, &PF::IsEmpty >( "isEmpty" );
	pw.Set( "dirSeparator", CastToJS( PF::DirSeparator() ), v8::ReadOnly );
	pw.Seal();

        // Set up some shared instances:
	Handle<Object> shared = Object::New();
	pw.CtorTemplate()->GetFunction()->Set(JSTR("shared"),shared);
	{
	    // Install an instance wrapping the v8::juice::plugin::PluginsPath() shared object:
            PathFinder * pf = &::v8::juice::plugin::PluginsPath();
	    Handle<Value> pfex( External::New( pf ) );
            bind::BindNative( pf, pf );
	    Handle<Object> pfobj = pw.NewInstance( MagicExternalArgc, &pfex );
	    shared->Set(String::New("plugins"), pfobj );
	}

	if(1)
	{
	    // Includes includes path:
            PathFinder * pf = &::v8::juice::ScriptsPath();
	    Handle<Value> pfex( External::New( pf ) );
            bind::BindNative( pf, pf );
	    Handle<Object> pfobj = pw.NewInstance( MagicExternalArgc, &pfex );
	    shared->Set(String::New("include"), pfobj );
	}
	return target;
    }
#undef JSTR
#undef TOSS
}} // namespaces
