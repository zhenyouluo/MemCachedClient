#ifndef _INTERNAL_MACROS_H
#define _INTERNAL_MACROS_H

#ifdef BUILDING_COMMON
#define COMMON_EXPORT __declspec(dllexport)
#else
#define COMMON_EXPORT __declspec(dllimport) 
#endif
#endif

