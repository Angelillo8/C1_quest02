void my_string_formatting(char* param_1, char* param_2, int param_3)
{
    char output_string[50];
    sprintf(output_string,"Hello, my name is %s %s, I'm %d.\n", param_1, param_2, param_3);
    printf(output_string);
}