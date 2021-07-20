#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b;
clrscr();
printf("Enter the first number : ");
scanf("%d",&a);
printf("Enter the last number : ");
scanf("%d",&b);
printf("The even numbers between %d and %d are ",a,b);
for(i=a;i<=b;i++)
{  
   if(i%2==0)
   {
     printf("%d, ",i);
   }
}    
getch();
}

Output:
Enter the first number : 3
Enter the last number : 12
The even numbers between 3 and 12 are 4, 6, 8, 10, 12
