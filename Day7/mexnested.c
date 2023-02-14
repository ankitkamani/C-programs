#include<stdio.h>

void main(){

int a,b,c,d,e;

printf("enter value of a:-");
scanf("%d",&a);

printf("enter value of b:-");
scanf("%d",&b);

printf("enter value of c:-");
scanf("%d",&c);

printf("enter value of d:-");
scanf("%d",&d);

printf("enter value of e:-");
scanf("%d",&e);


if(a>b && a>c && a>d && a>e){
    printf("a is bigger...");
}else{

    if (b>c && b>d && b>e){
        printf("b is bigger...");
    }else{

        if (c>d && c>e){
            printf("c is bigger...");
        }else{

            if(d>e){
                printf("d is bigger...");
            }else{
                printf("e is bigger...");
            }

        }

    }
    
}


}