/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main() 
{
    int blocks[] = {1, 3, 5, 3, 1};
    int i,j;
    for(i=0;i<5;i++)
     {
        for(j=0;j<blocks[i];j++)
         {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}