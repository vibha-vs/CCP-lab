#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before swapping : %d and %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping : %d and %d",a,b);
    return 0;
}
void swap(int *m,int *n)
{
    int x;
    x=*m;
    *m=*n;
    *n=x;
}

Output :
Enter 2 numbers : 4 5
Before swapping : 4 and 5
After swapping : 5 and 4