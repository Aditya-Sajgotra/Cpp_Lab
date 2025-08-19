#include<stdio.h>

void swapByValue(int a, int b){
    int temp1;
    temp1 = a;
    a = b;
    b = temp1;
}

void swapByReference(int *ptr1, int *ptr2){
    int temp2;
    temp2 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp2;
}

int main(){
    int a ,b;

    printf("Enter the first no.");
    scanf("%d",&a);
    printf("Enter the second no.");
    scanf("%d",&b);

    printf("Original value of first number and second number is %d and %d\n", a, b);

    swapByValue(a,b);
    printf("Value of first number and second number after swap by value is %d and %d\n", a, b);

    swapByReference(&a,&b);
    printf("Value of first number and second number after swap by reference is %d and %d\n", a, b);



    return 0;
}