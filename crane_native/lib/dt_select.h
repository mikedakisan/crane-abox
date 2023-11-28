#ifndef DT_SELECT_H
#define DT_SELECT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "err.h"
#include "wrepl.h"
#include "data_format.h"

char* set_data_format(char* fname)
{
    if (fname == NULL) return NULL;
    if (fname != NULL)
    {   
        strcpy(data_format_name,fname);
        printf("%s",data_format_name);
    }
    else
    {
        arg_err("set_data_format");
    }
}

char* create_data_file(const char* name)
{
    char* dr = malloc(256);
    const char* ffp = "crane_native/data/data.name";
    if (name == NULL) return NULL;
    if (dr == NULL) return NULL;

    strcpy(dr,name);
    if (name != NULL)
    {
        char* crp = replace_string(ffp,"name",dr);
        FILE* form;
        form = fopen(crp,"w");
        free(dr);
        dr = NULL;
    }
}

#endif