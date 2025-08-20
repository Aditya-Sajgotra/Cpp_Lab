#include<stdio.h>

int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int *ptr1[5] = {&a,&b,&c,&d,&e}; //array of pointers

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr1[i]));
    }

    int arr[5] = {11,12,13,14,15};
    int (*ptr2)[] = &arr;

    for (int i = 0; i < 5; i++)
    {
         printf("%d\n", (*ptr2)[i]);
    }
    
    return 0;
}