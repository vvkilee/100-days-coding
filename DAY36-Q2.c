// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main() 
{
    int i,j,r,c,sum=0;
    int matrix[100][100];
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++) 
    {
        for(j=0;j<c;j++)
         {
            scanf("%d",&matrix[i][j]);
            sum+=matrix[i][j];
        }
    }
    printf("Output=%d\n",sum);
    return 0;
}