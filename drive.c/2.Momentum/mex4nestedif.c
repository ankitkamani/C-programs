#include <stdio.h>

void main()
{

    int a, b, c, d;

    printf("enter value of a:-");
    scanf("%d", &a);

    printf("enter value of b:-");
    scanf("%d", &b);

    printf("enter value of c:-");
    scanf("%d", &c);

    printf("enter value of d:-");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is mex...");
            }
        }
    }
    else if (b > c){
    
        if (b > d)
        {
            printf("B is mex...");
        }
    }
    else if (c > d)
    {
        printf("C is mex...");
    }
    else
    {
        printf("D is mex...");
    }
}