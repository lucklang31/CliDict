#ifndef _CSTR_H
#define _CSTR_H

#include <stdlib.h>
#include <string.h>

typedef struct _Cstr Cstr;

typedef struct _Cstr{
    char* string;
    int length;
    int realLength;
}Cstr;

Cstr* createCstr(const char* string);
void freeCstr(Cstr* cstr);

#endif

