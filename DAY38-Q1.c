// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() 
{
    int r,c,i,j;
    int matrix1[100][100],matrix2[100][100],sum[100][100];
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of the first matrix\n");
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
         {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix\n");
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++) 
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
         {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("Output\n");
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}