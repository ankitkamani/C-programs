/*2. C program to input and print array elements using pointers*/

#include<stdio.h>

void main(){

    int a[5],i,*b;

    printf("enter value of array :- ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    b = &a[0];

    for (i = 0; i < 5; i++)
    {
        printf("%d\n",b+i);
    }
    
    

}