#include<stdio.h>

int main(){
    int sumOdd=0;
    int sumEven=0;
    int arr[5] = {41,59,78,45,23};

    int *ptr = arr;

    for(int i = 0; i < 5; i += 2){
        sumEven += *(ptr + i);
    }
    for(int i = 1; i < 5; i += 2){
        sumOdd += *(ptr + i);
    }
    printf("%d %d", sumEven, sumOdd);
}