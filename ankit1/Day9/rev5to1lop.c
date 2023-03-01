#include<stdio.h>

void main(){

    int i,j,k;

    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= 5-i; k--)
        {
            printf(" ");
        }
        
        for (j = 5; j >=i; j--)
        {
            printf("*");
            
        }
        printf("\n");

    }

}