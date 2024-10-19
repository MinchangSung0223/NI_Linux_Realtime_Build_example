#ifndef _MYLIB_H_
#define _MYLIB_H_

#ifdef _WIN32
  #ifdef MYLIB_EXPORTS
    #define MYLIB_API __declspec(dllexport)
  #else
    #define MYLIB_API __declspec(dllimport)
  #endif
#else
  #define MYLIB_API
#endif

// 함수 선언
MYLIB_API int add(int x, int y);

#endif
