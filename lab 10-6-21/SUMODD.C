#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
int n;
clrscr();
printf("Enter the number of odd numbers : ");
scanf("%d",&n);
printf("The sum of squares of first %d odd numbers = %d",n,sum(n));
getch();
}
int sum(int n)
{
return(n*(4*n*n-1)/3);
}

Output:
Enter the number of odd numbers : 5
The sum of squares of first 5 odd numbers = 165
