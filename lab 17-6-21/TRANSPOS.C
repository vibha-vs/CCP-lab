#include <stdio.h>
#include <conio.h>
void main()
{
int m, n, i, j, a[10][10], b[10][10];
printf("Enter the number of rows and columns of a matrix : ");
scanf("%d%d", &m, &n);
printf("Enter the elements of the matrix\n");
for (i = 0; i < m; i++)
for (j = 0; j < n; j++)
scanf("%d", &a[i][j]);
printf("The entered matrix is\n");
for (i = 0; i < m; i++)
for (j = 0; j < n;j++)
{
printf("%d\t", a[i][j]);
b[j][i] = a[i][j];
if(j==n-1)
printf("\n");
}
printf("Transpose of the matrix is\n");
for (i = 0; i < n; i++)
for (j = 0; j < m; j++)
{
printf("%d\t", b[i][j]);
if(j==m-1)
printf("\n");
}

Output :
Enter the number of rows and columns of a matrix : 3 2
Enter the elements of the matrix
1 2 3 4 5 6
The entered matrix is 
1      2
3      4
5      6
Transpose of the matrix is
1      3      5
2      4      6
