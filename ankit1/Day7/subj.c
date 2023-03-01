#include <stdio.h>

void main()
{
    int java, c, flutter, html, php, android, laravel, sum, per;

    printf("Enter marks of flutter = ");
    scanf("%d", &flutter);
    printf("Enter marks of php = ");
    scanf("%d", &php);
    printf("Enter marks of java = ");
    scanf("%d", &java);
    printf("Enter marks of html = ");
    scanf("%d", &html);
    printf("Enter marks of c = ");
    scanf("%d", &c);
    printf("Enter marks of android = ");
    scanf("%d", &android);
    printf("Enter marks of laravel = ");
    scanf("%d", &laravel);

    per = (java + c + flutter + html + php + android + laravel) * 100 / 700;

    printf("Your persantage is = %d\n", per);

    switch (per / 10)
    {
    case 5:
        printf("you have B grade");
        break;
    case 6:
        printf("you have A grade");
        break;
    case 7:
        printf("good...");
        break;
    case 8:
        printf("excellent");
        break;
    case 9:
        printf("genius");
        break;
    case 10:
        printf("brilliant");
        break;

    default:
        printf("You are fail");
        break;
    }
}