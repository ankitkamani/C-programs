/*3. Write C program to addition of two matrices.*/

#include<stdio.h>

void main(){

    int a[2][3],b[2][3],sum[2][3],i,j;

    printf("enter value of a Array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter value of a Array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("sum of array is = \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            
        }
       
    }

    printf("enter value of a Array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ",sum[i][j]);
        }
         printf("\n");
    }


    
}