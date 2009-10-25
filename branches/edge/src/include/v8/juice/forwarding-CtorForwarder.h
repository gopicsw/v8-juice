// GENERATED CODE! Edit at your own risk!
#if !defined(DOXYGEN)
/** Specialization 1 arguments. */
template <typename T>
struct CtorForwarder<T,1>
{
    enum { Arity = 1 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,1>::Ctor() expects at least 1 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]) );
        }
    }

};
/** A CtorForwarder<T,1> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0 >
struct CtorForwarder1
{
    enum { Arity = 1 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,1> CT;
        return CT::template Ctor<  A0 >( argv );
    }
};

/** Specialization 2 arguments. */
template <typename T>
struct CtorForwarder<T,2>
{
    enum { Arity = 2 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0,  typename A1 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,2>::Ctor() expects at least 2 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]), CastFromJS< A1 >(argv[1]) );
        }
    }

};
/** A CtorForwarder<T,2> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0,  typename A1 >
struct CtorForwarder2
{
    enum { Arity = 2 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,2> CT;
        return CT::template Ctor<  A0, A1 >( argv );
    }
};

/** Specialization 3 arguments. */
template <typename T>
struct CtorForwarder<T,3>
{
    enum { Arity = 3 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0,  typename A1,  typename A2 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,3>::Ctor() expects at least 3 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]), CastFromJS< A1 >(argv[1]), CastFromJS< A2 >(argv[2]) );
        }
    }

};
/** A CtorForwarder<T,3> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0,  typename A1,  typename A2 >
struct CtorForwarder3
{
    enum { Arity = 3 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,3> CT;
        return CT::template Ctor<  A0, A1, A2 >( argv );
    }
};

/** Specialization 4 arguments. */
template <typename T>
struct CtorForwarder<T,4>
{
    enum { Arity = 4 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0,  typename A1,  typename A2,  typename A3 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,4>::Ctor() expects at least 4 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]), CastFromJS< A1 >(argv[1]), CastFromJS< A2 >(argv[2]), CastFromJS< A3 >(argv[3]) );
        }
    }

};
/** A CtorForwarder<T,4> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0,  typename A1,  typename A2,  typename A3 >
struct CtorForwarder4
{
    enum { Arity = 4 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,4> CT;
        return CT::template Ctor<  A0, A1, A2, A3 >( argv );
    }
};

/** Specialization 5 arguments. */
template <typename T>
struct CtorForwarder<T,5>
{
    enum { Arity = 5 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0,  typename A1,  typename A2,  typename A3,  typename A4 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,5>::Ctor() expects at least 5 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]), CastFromJS< A1 >(argv[1]), CastFromJS< A2 >(argv[2]), CastFromJS< A3 >(argv[3]), CastFromJS< A4 >(argv[4]) );
        }
    }

};
/** A CtorForwarder<T,5> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0,  typename A1,  typename A2,  typename A3,  typename A4 >
struct CtorForwarder5
{
    enum { Arity = 5 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,5> CT;
        return CT::template Ctor<  A0, A1, A2, A3, A4 >( argv );
    }
};

/** Specialization 6 arguments. */
template <typename T>
struct CtorForwarder<T,6>
{
    enum { Arity = 6 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,6>::Ctor() expects at least 6 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]), CastFromJS< A1 >(argv[1]), CastFromJS< A2 >(argv[2]), CastFromJS< A3 >(argv[3]), CastFromJS< A4 >(argv[4]), CastFromJS< A5 >(argv[5]) );
        }
    }

};
/** A CtorForwarder<T,6> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5 >
struct CtorForwarder6
{
    enum { Arity = 6 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,6> CT;
        return CT::template Ctor<  A0, A1, A2, A3, A4, A5 >( argv );
    }
};

/** Specialization 7 arguments. */
template <typename T>
struct CtorForwarder<T,7>
{
    enum { Arity = 7 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5,  typename A6 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,7>::Ctor() expects at least 7 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]), CastFromJS< A1 >(argv[1]), CastFromJS< A2 >(argv[2]), CastFromJS< A3 >(argv[3]), CastFromJS< A4 >(argv[4]), CastFromJS< A5 >(argv[5]), CastFromJS< A6 >(argv[6]) );
        }
    }

};
/** A CtorForwarder<T,7> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5,  typename A6 >
struct CtorForwarder7
{
    enum { Arity = 7 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,7> CT;
        return CT::template Ctor<  A0, A1, A2, A3, A4, A5, A6 >( argv );
    }
};

/** Specialization 8 arguments. */
template <typename T>
struct CtorForwarder<T,8>
{
    enum { Arity = 8 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5,  typename A6,  typename A7 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,8>::Ctor() expects at least 8 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]), CastFromJS< A1 >(argv[1]), CastFromJS< A2 >(argv[2]), CastFromJS< A3 >(argv[3]), CastFromJS< A4 >(argv[4]), CastFromJS< A5 >(argv[5]), CastFromJS< A6 >(argv[6]), CastFromJS< A7 >(argv[7]) );
        }
    }

};
/** A CtorForwarder<T,8> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5,  typename A6,  typename A7 >
struct CtorForwarder8
{
    enum { Arity = 8 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,8> CT;
        return CT::template Ctor<  A0, A1, A2, A3, A4, A5, A6, A7 >( argv );
    }
};

/** Specialization 9 arguments. */
template <typename T>
struct CtorForwarder<T,9>
{
    enum { Arity = 9 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5,  typename A6,  typename A7,  typename A8 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,9>::Ctor() expects at least 9 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]), CastFromJS< A1 >(argv[1]), CastFromJS< A2 >(argv[2]), CastFromJS< A3 >(argv[3]), CastFromJS< A4 >(argv[4]), CastFromJS< A5 >(argv[5]), CastFromJS< A6 >(argv[6]), CastFromJS< A7 >(argv[7]), CastFromJS< A8 >(argv[8]) );
        }
    }

};
/** A CtorForwarder<T,9> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5,  typename A6,  typename A7,  typename A8 >
struct CtorForwarder9
{
    enum { Arity = 9 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,9> CT;
        return CT::template Ctor<  A0, A1, A2, A3, A4, A5, A6, A7, A8 >( argv );
    }
};

/** Specialization 10 arguments. */
template <typename T>
struct CtorForwarder<T,10>
{
    enum { Arity = 10 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    template <  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5,  typename A6,  typename A7,  typename A8,  typename A9 >
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
	if( argv.Length() < Arity )
        {
            throw std::range_error("CtorForwarder<T,10>::Ctor() expects at least 10 JS arguments!");
        }
        else
        {
            return new Type(  CastFromJS< A0 >(argv[0]), CastFromJS< A1 >(argv[1]), CastFromJS< A2 >(argv[2]), CastFromJS< A3 >(argv[3]), CastFromJS< A4 >(argv[4]), CastFromJS< A5 >(argv[5]), CastFromJS< A6 >(argv[6]), CastFromJS< A7 >(argv[7]), CastFromJS< A8 >(argv[8]), CastFromJS< A9 >(argv[9]) );
        }
    }

};
/** A CtorForwarder<T,10> workalike which is 
templatized on the ctor paramter types. */
template <typename T,  typename A0,  typename A1,  typename A2,  typename A3,  typename A4,  typename A5,  typename A6,  typename A7,  typename A8,  typename A9 >
struct CtorForwarder10
{
    enum { Arity = 10 };
    typedef typename TypeInfo<T>::Type Type;
    typedef typename TypeInfo<T>::NativeHandle NativeHandle;
    static NativeHandle Ctor( ::v8::Arguments const & argv )
    {
        typedef CtorForwarder<T,10> CT;
        return CT::template Ctor<  A0, A1, A2, A3, A4, A5, A6, A7, A8, A9 >( argv );
    }
};

#endif // if !defined(DOXYGEN)
