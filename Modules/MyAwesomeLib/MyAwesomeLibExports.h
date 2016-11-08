
#ifndef MyAwesomeLib_EXPORT_H
#define MyAwesomeLib_EXPORT_H

#ifdef MYAWESOMELIB_STATIC_DEFINE
#  define MyAwesomeLib_EXPORT
#  define MyAwesomeLib_NO_EXPORT
#else
#  ifndef MyAwesomeLib_EXPORT
#    ifdef MyAwesomeLib_EXPORTS
        /* We are building this library */
#      define MyAwesomeLib_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MyAwesomeLib_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MyAwesomeLib_NO_EXPORT
#    define MyAwesomeLib_NO_EXPORT 
#  endif
#endif

#ifndef MyAwesomeLib_DEPRECATED
#  define MyAwesomeLib_DEPRECATED __declspec(deprecated)
#endif

#ifndef MyAwesomeLib_DEPRECATED_EXPORT
#  define MyAwesomeLib_DEPRECATED_EXPORT MyAwesomeLib_EXPORT MyAwesomeLib_DEPRECATED
#endif

#ifndef MyAwesomeLib_DEPRECATED_NO_EXPORT
#  define MyAwesomeLib_DEPRECATED_NO_EXPORT MyAwesomeLib_NO_EXPORT MyAwesomeLib_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MyAwesomeLib_NO_DEPRECATED
#    define MyAwesomeLib_NO_DEPRECATED
#  endif
#endif

#endif
