#include<stdio.h>

int main(){
    int temp;
    // int j = 0;
    // int transpose[3][3];
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int (*ptr)[3] = arr;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if( i == j){

            }
            else if( i < j){
                temp = *(*(ptr + i) + j) ;
                *(*(ptr + i) + j) = *(*(ptr + j) + i);
                *(*(ptr + j) + i) = temp;
            }
        }
        
    }
    
    // int (*ptr1)[3] = transpose;

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         *(*(ptr1 + j) + i) = *(*(ptr + i) + j);
    //     }

        
    // }
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
        
        
    }
}
