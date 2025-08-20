#include <stdio.h>

int max(int *a, int *b, int *c)
{
    if (*a > *b && *a > *c)
    {
        return *a;
    }
    else if (*b > *a && *b > *c)
    {
        return *b;
    }
    else
    {
        return *c;
    }
}

int main()
{
    int a, b, c;

    printf("Enter the first no.");
    scanf("%d", &a);

    printf("Enter the second no.");
    scanf("%d", &b);

    printf("Enter the third no.");
    scanf("%d", &c);

    int largest = max(&a, &b, &c);

    printf("Largest of all the no. is %d", largest);
    return 0;
}