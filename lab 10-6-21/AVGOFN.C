#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0,a[10];
float avg;
clrscr();
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
avg=(sum/n);
printf("Average =%.2f",avg);
getch();
}

Output :
Enter the number of elements : 5
Enter the array elements : 3 4 2 5 1
Average = 3.00
