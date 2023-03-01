#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{

    char value[100];
    int n, i;

    printf("enter anything...\n");
    scanf("%s", &value);

    n = strlen(value);

    for (i = 0; i < n; i++)
    {

        if (value[i] >= 'a' && value[i] <= 'z')
        {
            printf("%s", strupr(value));
            break;
        }
        else if (value[i] >= 'A' && value[i] <= 'Z')
        {
            printf("%s", strlwr(value));
            break;
        }
        else
        {
            printf("enter only a/A to z/Z...");
            break;
        }
    }
}