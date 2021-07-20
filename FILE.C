#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char c;
char str[40];
clrscr();
printf("Data Input\n");
fp=fopen("BMSCE.txt","w");
while((c=getchar())!=EOF)
putc(c,fp);
fclose(fp);
printf("Data output\n");
fp=fopen("BMSCE.txt","r");
if(fp==NULL)
{
printf("error\n");
exit(1);
}
fgets(str,40,fp);
puts(str);
fclose(fp);
getch();
}

Output :
Data input
Happy Birthday
Data output
Happy Birthday