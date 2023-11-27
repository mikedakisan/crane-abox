#ifndef ERR_H
#define ERR_H
#include <stdio.h>
char* arg_err(char* err)
{
    printf("CRANE ERROR: No argument(s) given in function %s\n",err);
}
#endif