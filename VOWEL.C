#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter a letter : ");
scanf("%c",&c);
switch(c)
{
case 'A':
case 'a':printf("It is a vowel");
break;
case 'E':
case 'e':printf("It is a vowel");
break;
case 'I':
case 'i':printf("It is a vowel");
break;
case 'O':
case 'o':printf("It is a vowel");
break;
case 'U':
case 'u':printf("It is a vowel");
break;
default:printf("It is a consonant");
}
getch();
}

Output :

Enter a letter : E
It is a vowel

Enter a letter: o
It is a vowel

Enter a letter: B
It is a consonant