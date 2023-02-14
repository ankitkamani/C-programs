#include<stdio.h>

void main(){

int a,b,c,sum;

printf("enter value a :-");
scanf("%d",&a);

printf("enter value b :-");
scanf("%d",&b);

printf("enter value c :-");
scanf("%d",&c);

sum = (a+b+c)*100/300;

if(sum>50){
printf("good score in exam...");
}
}