/*4. Write C program matrix convert into transpose matrix.*/

#include <stdio.h>

void main()
{

    int a[2][3], tran[3][2], i, j;

    printf("enter value of a Array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("transpos array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            tran[j][i] = a[i][j];
        }
    }

    printf("enter value of a Array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d  ", tran[i][j]);
            if (j == 3  - 1)
                printf("\n");
        }
    }
    printf("\n");
}
}