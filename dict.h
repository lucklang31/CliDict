#ifndef _DICT_H
#define _DICT_H

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

#endif

