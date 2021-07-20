#include <stdio.h>
#include <stdlib.h>

void main()
{
   int a,b,*m=&a,*n=&b;
   printf("Enter the 2 numbers : ");
   scanf("%d%d",&a,&b);
   printf("Addition = %d\n",(*m)+(*n));
   printf("Subtraction = %d\n",(*m)-(*n));
   printf("Multiplication = %d\n",(*m)*(*n));
   printf("Division = %0.2f\n",(*m)/(*n));
   printf("Modulus = %d\n",(*m)%(*n));
}

Output :
Enter the 2 numbers : 4 8
Addition = 12
Subtraction = -4
Multiplication = 32
Division = 0.00
Modulus = 4
