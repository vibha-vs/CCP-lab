#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20],c[20];
int i=0,j=0,len=0;
clrscr();
printf("Enter the first string : ");
gets(a);
printf("Enter the second string : ");
gets(b);
while(a[i]!='\0')
{
i++;
len++;
}
while(b[j]!='\0')
{
a[i]=b[j];
i++;
j++;
len++;
}
a[i]='\0';
printf("The concatenated string is %s",a);
printf("\nThe length of the concatenated string is %d",len);
getch();
}

Output:
Enter the first string : happy
Enter the second string : _birthday
The concatenated string is happy_birthday
The length of the concatenated string is 14
