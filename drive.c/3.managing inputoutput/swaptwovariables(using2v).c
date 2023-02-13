#include <stdio.h>

void main(){

int a = 10, b=15;


 printf("swaped before value...\n");
 printf("first value is :- %d\n",a);
 printf("second value is :- %d \n",b);

    a = b;
    b = a - 5;

 printf("swaped after value...\n");
 printf("first value is :- %d\n",a);
 printf("second value is :- %d",b);


}