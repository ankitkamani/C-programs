/*1. Write C program to print all negative elements in an array.*/

#include <stdio.h>

void main()
{

    int a[10], i;

    printf("enter value = ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] <= 0)
        {
            printf("Nagative element is %d\n", a[i]);
        }
    }
}