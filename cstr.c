#include "cstr.h"

Cstr* createCstr(const char* string)
{
    int length = strlen(string);
    int realLength = length * 1.5;

    Cstr* cstr = (Cstr*)malloc(sizeof(Cstr));
    cstr->string = (char*)malloc(sizeof(char) * realLength);
    strcpy(cstr->string, string);
    cstr->length = length;
    cstr->realLength = realLength;

    return cstr;
}

void freeCstr(Cstr* cstr)
{
    free(cstr->string);
    free(cstr);
}

