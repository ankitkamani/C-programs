#include <stdio.h>

void main()
{

    char day;

    printf("enter days first charcter:-");
    scanf("%c", &day);

    switch (day)
    {
    case 'm':
    case 'M':
        printf("today is monday");
        break;

    case 't':
    case 'T':
        printf("today is tuesday");
        break;

    case 'w':
    case 'W':
        printf("today is wednesday");
        break;

    case 'h':
    case 'H':
        printf("today is thusday");
        break;

    case 'f':
    case 'F':
        printf("today is friday");
        break;

    case 's':
    case 'S':
        printf("today is saturday");
        break;

    case 'n':
    case 'N':
        printf("today is sunday");
        break;

    default:
        printf("enter valid character...");
        break;
    }
}