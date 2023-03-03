/*2. Write C program to find second largest number in array.*/

#include <stdio.h>

void main()
{

    int a, b, c;

    printf("enter value of a = ");
    scanf("%d", &a);

    printf("enter value of b = ");
    scanf("%d", &b);

    printf("enter value of c = ");
    scanf("%d", &c);

    if (a>b && b<c)
    {
        printf("c is second largest");
    }else if(c>a && a<b){
        printf("b is second largest");
    }else{
        printf("a is second largest");
    }
    
}