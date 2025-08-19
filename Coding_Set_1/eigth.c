#include <stdio.h>

int main()
{
    char *str = "Hello World";
    int str_length = 0;
    // printf("%c", *str);

    while (*str != '\0')
    {
        str_length++;
        str += 1;
    }

    printf("Length of the string is %d", str_length);
}