/*1.WAP to find square of each element using Pointer.*/

#include<stdio.h>

void main(){

float side ,area;
float *x ;

printf("enter area :- ");
scanf("%f",&side);

x = &side;

printf("%f",(*x)*(*x));

}