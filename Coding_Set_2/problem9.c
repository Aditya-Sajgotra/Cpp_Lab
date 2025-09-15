#include<stdio.h>

int main(){
    char *a = "Aarav";
    char *b = "Atharav";
    char *c = "Aditya";
    char *d = "Nitan";

    char *ptr[4] = {a, b, c, d};

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", *(ptr + i));
    }
    
}