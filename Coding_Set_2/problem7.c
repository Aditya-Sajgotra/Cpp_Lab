#include<stdio.h>

int main(){
    int sum = 0;
    int arr[2][2][2] = {{{1,2}
                        ,{3,4}}

                        ,{{5,6}
                        ,{7,8}}};


    int (*ptr)[2][2] = arr;  

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum += *(*(*(ptr + i) + j) + k);
            }
        
        }
    
    }
    printf("%d", sum);

}