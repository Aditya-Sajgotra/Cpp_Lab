#include<stdio.h>

int main(){
    int arr[3][3] = {
        {1,2,23},
        {4,15,16},
        {77,8,9}
    };
    int max,num;
     int (*ptr)[3] = arr;

    for (int i = 0; i < 3; i++)
    {
        max = *(*(ptr + i));
        for (int j = 0; j < 3; j++)
        {
            if(max < *(*(ptr + i) + j)){
                max = *(*(ptr + i) + j);
            }
        }
        printf("max of %d row is %d\n", i , max);
            
        
    }
    
}