#include <stdio.h>
#include <conio.h>
void main() 
{
  int m, n, a[10][10], b[10][10], sum[10][10], i, j;
  printf("Enter the number of rows and colums of the matrices : ");
  scanf("%d%d",&m,&n);
  printf("Enter elements of first matrix :\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  printf("Enter elements of second matrix :\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) 
      scanf("%d", &b[i][j]);
  for (i = 0; i < m;++i)
    for (j = 0; j < n; ++j)
      sum[i][j] = a[i][j] + b[i][j];
  printf("Sum of two matrices : \n");
  for (i = 0; i < m; ++i)
    for (j = 0; j < n;++j) {
      printf("%d   ", sum[i][j]);
      if (j == m - 1)
        printf("\n\n");
    }
  getch();
}
 
Output :
Enter the number of rows and columns of the matrices : 3 2
Enter elements of first matrix :
1 2 3 4
Enter elements of second matrix :
5 3 1 6
Sum of two matrices:
6   5

4   10   