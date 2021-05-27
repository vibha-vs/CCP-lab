#include<stdio.h>
#include<conio.h>
int time(int,int);
void main()
{
int h,m;
clrscr();
printf("Enter the time in hours and minutes : ");
scanf("%d%d",&h,&m);
printf("The time in minutes is %d minutes",time(h,m));
getch();
}
int time(int h,int m)
{
return(60*h+m);
}

Output :

Enter the time in hours and minutes : 2 30
The time in minutes is 150 minutes

Enter the time in minutes : 4 0
The time in minutes is 240 minutes