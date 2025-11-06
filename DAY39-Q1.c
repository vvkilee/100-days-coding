// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
int main() 
{
    int i,j,n,m,c=1;
    printf("Enter rows and columns\n");
    scanf("%d %d",&n,&m);
    int matrix[n][m];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
         {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n && i<m;i++)
     {
        for(j=i+1;j<n && j<m;j++)
         {
            if (matrix[i][i]==matrix[j][j])
             {
                c=0;
                break;
            }
        }
        if(c==0) 
        break;
    }
    if(c==1)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}