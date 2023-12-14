void my_putstr(char* param_1)
{
    char *ptr = param_1;
    while(*ptr != '\0') {
        write(1, &*ptr, 1);
        ptr++;
    }
}