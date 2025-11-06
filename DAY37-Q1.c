// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main() 
{
    int r,c,i,j;
    int matrix[100][100];
    int rowSums[100] = {0};
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
         {
            scanf("%d",&matrix[i][j]);
            rowSums[i]+=matrix[i][j];
        }
    }
    for(i=0;i<r;i++)
     {
        printf("%d",rowSums[i]);
    }
    printf("\n");
    return 0;
}