#include<stdio.h>

void main(){

    int unit;
    float total;

    printf("enter units:-");
    scanf("%d",&unit);

    if(unit<=50){

        total=unit*0.50;
        printf("your bill is %f",total);

    }else if(unit>50 && unit<=150){

        unit = unit - 50;
        total = (50*0.50)+(unit*0.75);
        printf("your bill is %f",total);

    }else if(unit>150 && unit<=250){

        unit = unit - 150;
        total = (50*0.50)+(100*0.75)+(unit*1.20);
        printf("your bill is %f",total);
        
    }else{

        unit = unit - 250;
        total = (50*0.50)+(100*0.75)+(100*1.20)+(unit*1.50);
        printf("your bill is %f",total);
        total = total + (total*20/100);
        printf("\nbill with additional surcharge %f",total);

    }

}