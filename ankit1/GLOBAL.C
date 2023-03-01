#include<stdio.h>
#include<conio.h>

int a = 10;
float b = 20.5;

void main(){

	int c = 20;
	float d = 10.5;
	float sum;
	clrscr();
	sum = a+b+c+d;
	printf("sum of 2 global and local variable :%f",sum);

}