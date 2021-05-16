#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x1,x2,y1,y2,d;
clrscr();
printf("Enter the coordinates of two points : ");
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("\nThe distance between the two points is %f units",d);
getch();
}

Output:

Enter the coordinates of two points : 2 3 0 5                                   
                                                                                
The distance between the two points is 2.828427 units 
