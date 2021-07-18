#include <stdio.h>
#include <math.h>
void main()
{
int a,b,c;
float m1,m2,d,re,im;
printf("Enter the coefficients of the quadratic equation : ");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
    m1=(-b+sqrt(d))/(2*a);
    m2=(-b-sqrt(d))/(2*a);
    printf("The roots are real and distinct\nThe roots are %f and %f",m1,m2);
}
else if(d==0)
{
    m1=-b/(2*a);
    printf("The roots are real and equal\nThe roots are %f and %f",m1,m1);
}
else
{
    re=(float)(-b)/(2*a);
    im=(float)sqrt(-d)/(2*a);
    printf("The roots are imaginary\nThe roots are %f+%fi and %f-%fi",re,im,re,im);
}
}

Output 1 :
Enter the coefficients of the quadratic equation : 1 -2 1
The roots are real and equal
The roots are 1 and 1
    
Output 2 :
Enter the coefficients of the quadratic equation : 1 7 12
The roots are real and distinct
The roots are -3 and -4
    
Output 3 :
Enter the coefficients of the quadratic equation : 1 1 1
The roots are imaginary
The roots are -0.500000+0.866025i and -0.500000-0.866025i
