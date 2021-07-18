#include <stdio.h>
#include <conio.h>

int main()
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
    return 0;
}
