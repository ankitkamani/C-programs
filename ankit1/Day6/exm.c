#include<stdio.h>

void main(){

int a,b,c,d,e,f,g,sum;

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

printf("enter value of f:-");
scanf("%d",&f);

printf("enter value of g:-");
scanf("%d",&g);

sum = (a+b+c+d+e+f+g)*100/700;

if(sum>=90 && sum<100){
    printf("you are genius");
}else if (sum>80 && sum<=90){
    printf("you are excellent");
}else if(sum>70 && sum<=80){
    printf("you are good");
}else if(sum>=60 && sum<70){
    printf("you have a grade");
}else if(sum>=50 && sum<60){
    printf("you have b grade");
}else{
    printf("you have not good marks...");
}

}