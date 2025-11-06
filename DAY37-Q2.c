// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>
int main()
 {
    int i,j,r,c;
    int matrix[100][100];
    int transpose[100][100];
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
         {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
         {
            transpose[j][i]=matrix[i][j];
        }
    }
    for(i=0;i<c;i++)
     {
        for(j=0;j<r;j++)
         {
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}