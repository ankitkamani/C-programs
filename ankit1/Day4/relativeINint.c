#include<stdio.h>

void main(){

int a,b,c;

printf("use of > :\n");
printf("Enter first number :-");
scanf("%f",&a);

printf("Enter second number :-");
scanf("%f",&b);

if (a>b)
{
    printf("a is bigger");
}else{
    printf("b is bigger");
}


printf("\nuse of < :\n");
printf("Enter first number :-");
scanf("%f",&a);

printf("Enter second number :-");
scanf("%f",&b);

if (a<b)
{
    printf("a is smaller");
}else{
    printf("b is smaller");
}


printf("\nuse of > :\n");
printf("Enter first number :-");
scanf("%f",&a);

printf("Enter second number :-");
scanf("%f",&b);

if (a==b)
{
    printf("a and b is equal");
}else{
    printf("a and b is not equal");
}


printf("\nuse of > :\n");
printf("Enter first number :-");
scanf("%f",&a);

printf("Enter second number :-");
scanf("%f",&b);

if (a<=b)
{
    printf("a and b is equal or small");
}else{
    printf("a and b is not equal or small");
}


printf("\nuse of > :\n");
printf("Enter first number :-");
scanf("%f",&a);

printf("Enter second number :-");
scanf("%f",&b);

if (a>=b)
{
    printf("a and b is equal or bigger");
}else{
    printf("a and b is not equal or bigger");
}



}