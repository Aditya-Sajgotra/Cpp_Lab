#include<stdio.h>

void increment(int *p){
    *p+=1;
}

int main(){
    int a;

    printf("Enter the first no.");
    scanf("%d",&a);
    
    printf("Value of a before increment is %d\n", a);

    increment(&a);
    printf("Value of a after increment is %d\n", a);
    
    return 0;
}