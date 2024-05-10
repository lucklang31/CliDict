#include "dict.c"

Dict* createDict(const char* name, const char* author)
{
    Dict* dict = (Dict*)malloc(sizeof(Dict));
    dict->name = createCstr(name);
    dict->author = createCstr(author);
    dict->itemCount = 0;
    dict->categoryCount = 0;

    return dict;
}

