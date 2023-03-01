#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{

    char value[100];
    int n, i, count = 0;

    printf("enter anything...\n");
    scanf("%s", &value);

    n = strlen(value);

    for (i = 0; i < n; i++)
    {
        if (value[i] != value[n - i -1])
        {
            count=1;
        }
    }
    if (count)
    {
        printf("not pelindrom");
    }
    else
    {
        printf("pelindrom");
    }
}