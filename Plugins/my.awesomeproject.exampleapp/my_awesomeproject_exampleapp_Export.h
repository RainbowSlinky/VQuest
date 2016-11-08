

// .NAME __my_awesomeproject_exampleapp_Export - manage Windows system differences
// .SECTION Description
// The __my_awesomeproject_exampleapp_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __my_awesomeproject_exampleapp_Export_h
#define __my_awesomeproject_exampleapp_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(my_awesomeproject_exampleapp_EXPORTS)
#    define AWESOME_APP_EXPORT Q_DECL_EXPORT
#  else
#    define AWESOME_APP_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(AWESOME_APP_EXPORT)
//#  if defined(CTK_SHARED)
#    define AWESOME_APP_EXPORT Q_DECL_EXPORT
//#  else
//#    define AWESOME_APP_EXPORT
//#  endif
#endif

#endif

