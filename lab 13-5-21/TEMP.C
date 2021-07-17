#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
clrscr();
printf("Enter the temperature in Fahrenheit : ");
scanf("%f",&a);
b=(a-32)*(5/9);
printf("\nThe temperature in Celsius : %f",b);
getch();
}

Output:

Enter the temperature in Fahrenheit : 32                                        
                                                                                
The temperature in Celsius : 0.000000      
