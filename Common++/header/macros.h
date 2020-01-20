#ifndef PCAPPP_MACROS
#define PCAPPP_MACROS

#if __GNUC__ >= 3
	#ifndef unlikely
		#define unlikely(cond) __builtin_expect((cond), 0)
	#endif
	#ifndef likely
		#define likely(cond) __builtin_expect((cond), 1)
	#endif
#else
	#ifndef unlikely
		#define unlikely(cond) (cond)
	#endif
	#ifndef likely
		#define likely(cond) (cond)
	#endif
#endif


#if __cplusplus > 199711L || _MSC_VER >= 1800
	#define nothrow noexcept
#else
	#define nothrow throw()
#endif


#endif

