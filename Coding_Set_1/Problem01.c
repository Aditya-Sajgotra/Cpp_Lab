#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr = &number;
    printf("Address of the variable is %d\n", ptr);
    printf("Value stored in the pointer is %d\n", *ptr);
    return 0;
}
