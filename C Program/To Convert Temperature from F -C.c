#include<stdio.h>

void main()
{
 float celsius, fahrenheit;

 printf("\n Enter Temp in Fahrenheit : ");
 scanf("%f", &fahrenheit);

 celsius = (fahrenheit-32) / 1.8;
 printf("\n Temperature in Celsius : %.2f ", celsius);

 getch();

}
