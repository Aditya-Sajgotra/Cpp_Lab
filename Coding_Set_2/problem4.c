#include<stdio.h>

int sum(int (*ptr1)[3], int (*ptr2)[3]){
    // int p = 0;
    // int q = 0;
    for( int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            // p = *(*(ptr1 + i) + j);
            // q = *(*(ptr2 + i) + j);
            *(*(ptr1 + i) + j) += *(*(ptr2 + i) + j);
        }
    }
    return 0;
}

int main(){
    int arr1[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int arr2[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int (*ptr)[3] = arr1;
    int (*ptr1)[3] = arr2;

    // printf("%d", *(*(ptr  + 1) + 1));
    sum(ptr, ptr1);

    for(int i = 0; i < 2;i++ ){
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", arr1[i][j]);
        }
        
    }

}