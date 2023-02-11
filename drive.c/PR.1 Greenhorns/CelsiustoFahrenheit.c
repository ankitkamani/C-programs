#include <stdio.h>
 
int main()
{
    float celsius, fahrenheit;
 
    printf("Please Enter temperature in Celsius: \n");
    scanf("%f", &celsius);
 
     fahrenheit = ((celsius * 9)/5) + 32;
 
    printf("\nFahrenheit is %f",fahrenheit);
    
}