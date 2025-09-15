#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enetr the length of array");
    scanf("%d", &n);
    int *ptr = malloc(sizeof(int) * n);
    int sum = 0;

    for(int i = 0; i < n; i++){
        printf("Enter element");
        scanf("%d", ptr+i );
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d\n", *(ptr + i));
        sum += *(ptr + i);
    }
    printf("Avg is %d", sum/n);
    
}