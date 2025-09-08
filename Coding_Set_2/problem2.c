#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    int *ptrl = &arr[4];

    int temp;
    while(ptr < ptrl){
        temp  = *ptr;
        *ptr = *ptrl;
        *ptrl = temp;
        ptr++;
        ptrl--;
    } 
    for(int i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    } 

}