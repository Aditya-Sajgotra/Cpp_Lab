#include<stdio.h>
#include<stdlib.h>


int max(int (*ptr)[5]){
    int max;
    for( int i = 0; i < 5; i++){
        if(i == 0){
            max = *((*ptr));
        }
        else{
            if( max < *((*ptr) + i)){
                max = *((*ptr) + i);
            }
        }
    }
    return max;
}

int main(){
    int num, input;

    // printf("Enter the no. of elements");
    // scanf("%d", &num);

    int arr[5] = {1,2,3,4,5};
    int (*ptr)[5] = &arr;



    printf("%d", max(ptr));
}