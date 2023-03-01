#include<stdio.h>

void main(){

    int num,fn,sn,sum;

    printf("enter any value :-");
    scanf("%d",&num);

    fn = num/100;
    sn = num%10;

    sum = fn+sn;

    printf("sum of value is :- %d",sum);


}