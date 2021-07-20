#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,a[5][5],s[5]; 
clrscr();
printf("Input Data :\n");
for(i=0;i<4;i++)
{ 
printf("\n");
for(j=0;j<3;j++)
{
printf("Student [%d] marks in subject [%d] : ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
for(j=0;j<3;j++)
{ 
s[j]=a[0][j];
for(i=0;i<4;i++)
{
if(s[j] < a[i][j])
s[j] = a[i][j];
}
}
for(i=0;i<3;i++)
{
printf("\n");
printf("Highest in Subject [%d] is %d",i+1,s[i]);
}
printf("\n");
getch();
}

Output :
Input Data :

Student [1] marks in subject [1] : 93
Student [1] marks in subject [2] : 97
Student [1] marks in subject [3] : 95

Student [2] marks in subject [1] : 87 
Student [2] marks in subject [2] : 89
Student [2] marks in subject [3] : 95

Student [3] marks in subject [1] : 78
Student [3] marks in subject [2] : 67
Student [3] marks in subject [3] : 89

Student [4] marks in subject [1] : 99
Student [4] marks in subject [2] : 96
Student [4] marks in subject [3] : 97

Highest in Subject [1] is 99
Highest in Subject [2] is 97
Highest in Subject [3] is 97
 
