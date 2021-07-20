#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10],large=0,small=0,lpos=0,spos=0,n;
clrscr();
printf("Enter the size of the array : ");
scanf("%d",&n);
printf("Enter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>large)
{
large=a[i];
lpos=i;
}
if(a[i]<small)
{
small=a[i];
spos=i;
}
}
a[lpos]=a[lpos]+a[spos];
a[spos]=a[lpos]-a[spos];
a[lpos]=a[lpos]-a[spos];
printf("The array after interchanging : ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
}

Output :
Enter the size of the array : 5
Enter the array elements : 2 1 3 5 4
The array after interchanging : 2 5 3 1 4
