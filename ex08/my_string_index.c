#include <stddef.h>
int my_string_index(char* param_1, char param_2)
{
    // int len = strlen(param_1);
    // for (int i; i < len; i++) {
    //     if (param_1[i] == param_2) {
    //         return i;
    //     }
    // }
    // return len;
    char *e = strchr(param_1, param_2);
    if (e == NULL) {
        return -1;
    }
    return (int)(e - param_1);
    // return strlen(param_1);
    // return param_1[2];
}