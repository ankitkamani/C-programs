/*2.WAP to swap two variables using Pointer.*/

#include<stdio.h>

void main(){

    int a,b,c,*x,*y;

    printf("enter value of A :- ");
    scanf("%d",&a);

    printf("enter value of B :- ");
    scanf("%d",&b);

    x=&a;
    y=&b;

     c = *x;
    *x = *y;
    *y = c;
    
    printf(" value of A :- %d\n",*x);
    printf(" value of B :- %d",*y);

}