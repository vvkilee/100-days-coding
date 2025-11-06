// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main() 
{
    int matrix[100][100];
    int r,c,i,j;
    int isSymmetric=1;
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of the matrix\n");
    if(r!=c) 
    {
        isSymmetric=0;
    }
     else 
    {
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
                if(matrix[i][j]!=matrix[j][i])
                 {
                    isSymmetric=0;
                    break;
                }
            }
        }
    }
    if(isSymmetric)
     {
        printf("True\n");
    }
     else
      {
        printf("False\n");
    }
    return 0;
}