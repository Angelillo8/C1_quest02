int my_strlen(char* param_1)
{
    int counter =0;
    char *pointer = param_1;
    while (*pointer != '\0') {
        counter++;
        pointer++;
    }
    return counter;
}