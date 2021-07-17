#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,s,area;
clrscr();
printf("Enter three sides of a triangle : ");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nThe area of the triangle is %f units",area);
getch();
}

Output:

Enter three sides of a triangle : 122 22 120                                    
                                                                                
The area of the triangle is 1320.000000 units              

