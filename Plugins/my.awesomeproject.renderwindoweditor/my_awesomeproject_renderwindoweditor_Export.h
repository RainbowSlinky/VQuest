

// .NAME __my_awesomeproject_renderwindoweditor_Export - manage Windows system differences
// .SECTION Description
// The __my_awesomeproject_renderwindoweditor_Export captures some system differences between Unix
// and Windows operating systems. 

#ifndef __my_awesomeproject_renderwindoweditor_Export_h
#define __my_awesomeproject_renderwindoweditor_Export_h

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(my_awesomeproject_renderwindoweditor_EXPORTS)
#    define MY_AWESOMEPROJECT_RENDERWINDOWEDITOR Q_DECL_EXPORT
#  else
#    define MY_AWESOMEPROJECT_RENDERWINDOWEDITOR Q_DECL_IMPORT
#  endif
#endif

#if !defined(MY_AWESOMEPROJECT_RENDERWINDOWEDITOR)
//#  if defined(CTK_SHARED)
#    define MY_AWESOMEPROJECT_RENDERWINDOWEDITOR Q_DECL_EXPORT
//#  else
//#    define MY_AWESOMEPROJECT_RENDERWINDOWEDITOR
//#  endif
#endif

#endif

