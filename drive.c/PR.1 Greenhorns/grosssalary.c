#include <stdio.h>
 
int main()
{

	char name[60];
	float Basic = 100, DA = 0.05, HRA = 0.10, TA = 0.08, Gross_Salary;
	
	    	
  	HRA = Basic * HRA; 
	DA = Basic * DA;  	

	Gross_Salary = Basic + HRA + DA;
	printf("\n Basic Salary = %f \n Gross Salary = %f",Basic,Gross_Salary); 
	Gross_Salary = Basic + HRA + DA + TA;
	printf("\n Basic Salary with TA Amount = %f",Gross_Salary); 

}