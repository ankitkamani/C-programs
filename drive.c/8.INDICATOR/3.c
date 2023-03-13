/*3. C program to reverse an array using pointers*/

#include<stdio.h>

void main(){

    int a[5],i,*b;

    printf("enter value of array :- ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    b = &a[4];

    for (i = 4; i >= 0; i--)
    {
        printf("%d\n",b+i);
    }
    
    

}