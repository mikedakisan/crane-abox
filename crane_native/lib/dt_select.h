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

char* create_data_file(const char* name, const char* path)
{
    char* dr = malloc(256);
    char* dr2 = malloc(256);
    const char* default_path = "crane_native/data/name.format";
    if (path == NULL || strlen(path) == 0) {
        path = default_path;
    }
    const char* file_format_path = path;
    if (name == NULL) return NULL;
    if (dr == NULL) return NULL;
    if (dr2 == NULL) return NULL;
    if (data_format_name == NULL) return NULL;

    strcpy(dr,name);
    strcpy(dr2,data_format_name);
    if (name != NULL)
    {
        char* crp = replace_string(file_format_path,"name",dr);
        char* crp_final = replace_string(crp,"format",dr2);
        FILE* form;
        form = fopen(crp_final,"w");
        free(dr);
        free(dr2);
        dr,dr2 = NULL;
    }
}

#endif