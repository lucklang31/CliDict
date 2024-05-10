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

void setCstr(Cstr* cstr, const char* string)
{
    int length = strlen(string);
    int realLength = length * 1.5;

    cstr->string = (char*)realloc(cstr->string, sizeof(char) * realLength);
    strcpy(cstr->string, string);
    cstr->length = length;
    cstr->realLength = realLength;
}

void addCstr(Cstr* cstr, const char* string)
{
    int newLength = cstr->length + strlen(string);
    if(newLength >= cstr->realLength)
    {
        cstr->realLength = newLength * 1.5;
        cstr->string = (char*)realloc(cstr->string, sizeof(char) * cstr->realLength);
    }

    strcpy(cstr->string + cstr->length, string);
    cstr->length = newLength;
}

