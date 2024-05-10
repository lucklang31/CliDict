#include <stdio.h>
#include "cstr.h"

int main()
{
    Cstr* cstr = createCstr("TEST\n11112234.\n\n!");

    printf("%s\n", cstr->string);

    free(cstr);

    return 0;
}

