/*3. Write a program to print integer value of day of week using enum*/
#include<stdio.h>

 enum Color {
        sunday,
        monday,
        tuesday,
        wednusday,
        thursday,
        friday,
        saturday
    };
void main(){
int i;

for (i = sunday; i <=saturday; i++)
{
    printf("%d\n",i);
}


}