#ifndef WREPL_H
#define WREPL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

char* replace_string(const char* input,const char* cw, const char* nw)
{
    size_t cwl = strlen(cw);
    size_t nwl = strlen(nw);

    size_t result_size = strlen(input) + 1;
    char* result = (char*)malloc(result_size);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    size_t input_index = 0;
    size_t result_index = 0;

    while (input_index < strlen(input)) {
        if (strncmp(&input[input_index], cw, cwl) == 0) {
            strncpy(&result[result_index], nw, nwl);
            result_index += nwl;
            input_index += cwl;
        } else {
            result[result_index++] = input[input_index++];
        }
    }
    result[result_index] = '\0';
    return result;
    free(result);
    result = NULL;
}
#endif