#include<stdio.h>

void main(){

        int a;
        a=1;
        while (a<=10)
        {
            a++;
            if(a==5){
                continue;
            }
            printf("%d\n",a);
        }
     
}