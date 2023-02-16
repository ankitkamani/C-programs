#include<stdio.h>

void main(){

    char any;

    printf("enter any alphabet, digit or special character :-");
    scanf("%c",&any);

    if ((any>='a' && any<='z') || (any>='A' && any<='Z'))
    {
       printf("it is alphabet...");
    }else if(any>='0' && any<='9'){
        printf("it is Digit...");
    }else {
        printf("it is special character...");
    }
    
}