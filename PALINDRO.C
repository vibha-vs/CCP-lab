#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
int i=0,len=0;
clrscr();
printf("Enter a string : ");
gets(a);
strcpy(b,a);
len=strlen(a)-1;
while(len>i)
{
a[i]=a[i]+a[len];
a[len]=a[i]-a[len];
a[i]=a[i]-a[len];
i++;
len--;
}
printf("The reversed string : ");
puts(a);
if(!strcmp(a,b))
printf("The string is a palindrome");
else
printf("The string is not a palindrome");
getch();
}

Output 1:
Enter a string : happy
The reversed string : yppah
The string is not a palindrome

Output 2:
Enter a string : level
The reversed string : level
The string is a palindrome 


