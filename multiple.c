#include <stdio.h>
#include <conio.h>

void main()
{
    int n,i;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The multiples of %d from 1 to 100 are ",n);
    for(i=1;i<=100;i++)
    {
        if(i%n==0)
            printf("%d, ",i);
    }
    getch();
}

Output :
Enter a number : 20
The multiples of 20 from 1 to 100 are 20, 40, 60, 80, 100,
