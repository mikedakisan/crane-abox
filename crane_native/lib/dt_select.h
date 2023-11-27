#ifndef DT_SELECT_H
#define DT_SELECT_H
#include <stdio.h>
#include "err.h"

char* set_data_format(char* name[])
{
    if (name != NULL)
    {
        FILE* data_format = fopen("crane_native/data/format.name","w");
        fclose(data_format);
    }
    else
    {
        arg_err("set_data_format");
    }
}

#endif