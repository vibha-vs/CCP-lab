#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,r,n;
clrscr();
printf("Enter a number : ");
scanf("%d",n);
 while(n>0)
 {
   r=n%10;
   sum+=r;
   n/=10;
 }
printf("The sum of the digits of the number is %d",sum);
getch();
}

Output :
Enter a number : 145
The sum of the digits of the number is 10
