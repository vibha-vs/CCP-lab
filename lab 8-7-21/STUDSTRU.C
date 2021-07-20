#include <stdio.h>
#include <conio.h>
void main()
{
struct stud
{
char name[20],dept[20],sec[5];
float fees;
int roll,marks;
}stud1,stud2;
clrscr();
printf("Enter the Student-1 details: Roll no., Name, Section, Department, Fees, Marks\n");
scanf("%s %s %s %s %f %d",stud1.roll,stud1.name,stud1.sec,stud1.dept,&stud1.fees,&stud1.marks);
printf("Enter the Student-2 details: Roll no., Name, Section, Department, Fees, Marks\n");
scanf("%s %s %s %s %f %d",stud2.roll,stud2.name,stud2.sec,stud2.dept,&stud2.fees,&stud2.marks);
if(stud1.marks>=stud2.marks)
printf("Student-1 has scored the highest\nDetails :\nRoll no. = %s\nName = %s\nSection = %s\nDepartment = %s\nFees = %.2f\nTotal marks = %d",stud1.roll,stud1.name,stud1.sec,stud1.dept,stud1.fees,stud1.marks);
else
printf("Student-2 has scored the highest\nDetails :\nRoll no. = %s\nName = %s\nSection = %s\nDepartment = %s\nFees = %.2f\nTotal marks = %d",stud2.roll,stud2.name,stud2.sec,stud2.dept,stud2.fees,stud2.marks);
getch();
}

Output :
Enter the Student-1 details: Roll no., Name, Section, Department, Fees, Marks
1BM20CS184 Vibha CC CSE 200000 98
Enter the Student-2 details: Roll no., Name, Section, Department, Fees, Marks
1BM20AI132 Sahana CG AI 5000000 73
Student-1 has scored the highest
Details :
Roll no. = 1BM20CS184
Name = Vibha
Section = CC
Department = CSE
Fees = 200000
Total marks = 98
