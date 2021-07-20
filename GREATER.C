#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
if(a>b)
printf("%d is greater than %d",a,b);
else if(a<b)
printf("%d is greater than %d",b,a);
else
printf("Both are equal");
getch();
}

Output 1 :
Enter two numbers : 6 1
6 is greater than 1

Output 2 :
Enter two numbers : 3 12
12 is greater than 3

Output 3 :
Enter two numbers : 5 5
Both are equal

