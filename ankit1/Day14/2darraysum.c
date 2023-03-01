/*2 array  -> sum -> odd/even */

#include <stdio.h>

void main()
{

    int a[2][3], b[2][3], i,j, sum[2][3];

    printf("enter array value of a = \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("enter array value of b = \n");
    for (i = 0; i <2; i++)
    {
        for (j = 0; j <3; j++)
        {

            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("sum of array is =\n");
    for (i = 0; i <2; i++)
    {
        for (j = 0; j <3; j++)
        {

            sum[i][j] = a[i][j] + b[i][j];
            
            printf("%d\n",sum[i][j]);
        }
    }

    printf("even number of 2 array sum ... \n");
    for (i = 0; i <2; i++)
    {
        for (j = 0; j <3; j++)
        {

            if (sum[i][j] % 2 == 1)
            {
                printf("%d\n", sum[i][j]);
            }
        }
    }
}
