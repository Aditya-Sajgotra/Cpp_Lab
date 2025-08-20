#include<stdio.h>

void reverse(int *arr, int n){
    int temp;
    int *ptr = &arr[n-1];

    while(arr<ptr){
        temp = *arr;
        *arr = *ptr;
        *ptr = temp;
        arr++;
        ptr--;
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,7};
    reverse(arr,6);
     for (int i = 0; i < 5; i++)
     {
        printf("%d\n",arr[i]);
     }
     return 0;

}