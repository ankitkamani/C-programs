#include<stdio.h>

void main(){

int a,b,c,d;

printf("enter value of a:-");
scanf("%d",&a);

printf("enter value of b:-");
scanf("%d",&b);

printf("enter value of c:-");
scanf("%d",&c);

printf("enter value of d:-");
scanf("%d",&d);

if(a>b && a>c && a>d){
    printf("a is bigger");
}else{

    if(b>c && b>d){
        printf("b is bigger");
    }else{

        if(c>d){
            printf("c is bigger");
        }else{
            printf("d is bigger");
        }

    }

}

}