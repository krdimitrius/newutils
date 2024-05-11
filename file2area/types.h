/*=============================================
types.h
Определения типов
Version 1.1.
=============================================*/

#ifndef __TYPES_H
#define __TYPES_H


// #pragma language=extended

typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned long dword;

typedef bool bit;
// typedef bit bool;
// enum Boolean { false, true };


#define LOW(w)        ((byte)(w))
#define HIGH(w)        ((byte)((w) >> 8))

#define LWRD(dw)    ((word)(dw))
#define HWRD(dw)    ((word)((dw) >> 16))


//#define NELEMS(array)    (sizeof((array)) / sizeof((array)[0]))


#endif

/* eof */
