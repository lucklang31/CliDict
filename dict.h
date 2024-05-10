#ifndef _DICT_H
#define _DICT_H

#include <stdio.h>
#include <stdlib.h>
#include "cstr.h"

typedef struct _Dict Dict;
typedef struct _DictItem DictItem;

typedef struct _Dict
{
    Cstr* name;
    Cstr* author;
    Cstr** categoryList;
    int categoryCount;
    DictItem** items;
    int itemCount;
}Dict;

typedef struct _DictItem
{
    Cstr* word;
    Cstr* mean;
    Cstr* pronunciation;
    int category;
}DictItem;

Dict* createDict(const char* name, const char* author);
Dict* loadDict(FILE* fs);
void saveDict(Dict* dict, const char* path);
void freeDict(Dict* dict);

void appendItem(Dict* dict, DictItem* item);
void deleteItem(Dict* dict, int index);

void appendCategory(Dict* dict, const char* category);
void deleteCategory(Dict* dict, int index);

#endif

