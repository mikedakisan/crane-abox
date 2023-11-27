#ifndef DT_SELECT_H
#define DT_SELECT_H
#include <stdio.h>
#include <stdlib.h>
#include "err.h"
#include "wrepl.h"

char* set_data_format(const char* name)
{
    char* dr = malloc(256);
    if (name == NULL) return NULL;
    if (dr == NULL) return NULL;
    strcpy(dr,name);
    if (name != NULL)
    {   
        const char* ffp = "crane_native/data/format.name";
        char* crp = replace_string(ffp,"name",dr);
        printf("%s",crp);
        free(dr);
        dr = NULL;
    }
    else
    {
        arg_err("set_data_format");
    }
}

#endif