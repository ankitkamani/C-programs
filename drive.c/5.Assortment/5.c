/*5. Write C program to find sum of diagonal elements of a matrix.*/

#include<stdio.h>
 
void main()
{
 	int i, j,a[10][10], Sum = 0;
  
 	printf("\n enter value \n");
 	for(i = 0; i < 3; i++)
  	{
   		for(j = 0;j < 3;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
   	  
 	for(i = 0; i < 3; i++)
  	{
   		Sum = Sum + a[i][i];
  	}
 
 	printf("\n The Sum of Diagonal Matrix is =  %d", Sum );

}