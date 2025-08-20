#include <stdio.h>

int sumUsingPointers(int *a, int *b)
{

    return *a + *b;
}

int main()
{
    int a, b;

    printf("Enter the first no.");
    scanf("%d", &a);

    printf("Enter the second no.");
    scanf("%d", &b);

    int sum = sumUsingPointers(&a, &b);

    printf("sum of the numbers is %d", sum);
}