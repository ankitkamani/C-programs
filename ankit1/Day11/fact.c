#include<stdio.h>

void main(){

    int n,facto=1,i=1;

    printf("Enter number:-");
    scanf("%d",&n);

    while (i <= n)
    {
        facto=facto*i;
        i++;
    }
    
    printf("%d",facto);
    

}