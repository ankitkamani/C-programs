#include <stdio.h>

void main()
{
    char symbols;
    printf("Enter anyone character between a to z :- ");
    scanf("%c", &symbols);
    switch (symbols)
    {
    case 'a':
        printf("a for ankit");
        break;
    case 'b':
        printf("b for ball");
        break;
    case 'c':
        printf("c for cat");
        break;
    case 'd':
        printf("d for dharmik");
        break;
    case 'e':
        printf("e for elephant");
        break;
    case 'f':
        printf("f for fish");
        break;
    case 'g':
        printf("g for grape");
        break;
    case 'h':
        printf("h for hen");
        break;
    case 'i':
        printf("i for ice-cream");
        break;
    case 'j':
        printf("j for jay");
        break;
    case 'k':
        printf("k for kite");
        break;
    case 'l':
        printf("l for lionking");
        break;
    case 'm':
        printf("m for monkey");
        break;
    case 'n':
        printf("n for nested");
        break;
    case 'o':
        printf("o for orange");
        break;
    case 'p':
        printf("p for prince");
        break;
    case 'q':
        printf("q for queen");
        break;
    case 'r':
        printf("r for rupesh sir");
        break;
    case 's':
        printf("s for sweet");
        break;
    case 't':
        printf("t for telephone");
        break;
    case 'u':
        printf("u for umbrella");
        break;
    case 'v':
        printf("v for vijay");
        break;
    case 'w':
        printf("w for watch");
        break;
    case 'x':
        printf("x for x-mastree");
        break;
    case 'y':
        printf("y for year");
        break;
    case 'z':
        printf("z for zebra");
        break;
    default:
    printf("choose between A to Z character");
        break;
    }
}