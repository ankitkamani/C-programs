#include <stdio.h>

void main(){

int a,b,c;

printf("enter value of first number :-");
scanf("%d",&a);

printf("enter value of second number :-");
scanf("%d",&b);


c = a;
a = b;
b = c;

 printf("swaped value...\n");
 printf("first value is :- %d\n",a);
 printf("second value is :- %d",b);


}