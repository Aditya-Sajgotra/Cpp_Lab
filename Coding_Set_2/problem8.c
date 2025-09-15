#include<stdio.h>

int main(){
    int arr[2][2][2];

    int (*ptr)[2][2] = arr;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {   
                printf("Enter elements");
                scanf("%d", *(*(ptr + i) + j) + k);
                // *(*(*(ptr + i) + j) + k) = 1;
            }
            
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {   
                printf("%d\n", *(*(*(ptr + i) + j) + k));
                
            }
            
        }
        
    }
    
}