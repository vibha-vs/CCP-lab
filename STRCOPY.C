#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i=0,len=0;
clrscr();
printf("Enter a string : ");
gets(a);
while(a[i]!='\0')
{
b[i]=a[i];
i++;
len++;
}
b[i]='\0';
printf("The copied string is %s",b);
printf("\nThe length of the string is %d",len);
getch();
}

Output:
Enter a string : tommy
The copied string is tommy
The length of the string is 5
