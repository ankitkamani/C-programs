#include<stdio.h>

void main(){

int a[10],i;
printf("enter value = ");

for (i = 0; i <=9; i++)
{
    scanf("%d",&a[i]);
}
for (i = 0; i <9; i++)
{
    
    if (a[i]%2==1)
    {
        printf("odd is:%d\n",a[i]);
    }
    
    
}



}