#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d digit", i + 1);
        scanf("%d", ptr + i);
    }

    printf("Elements of the array are\n");

    for (int j = 0; j < 5; j++)
    {
        printf("%d\n", *(ptr + j));
    }
}
