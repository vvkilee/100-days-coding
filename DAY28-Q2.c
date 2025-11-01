// Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
#define m 100
int main() {
    int arr[m];
    int n, i;
    printf("Enter the number of elements in the array\n ");
    scanf("%d", &n);
    if (n>m) 
    {
        printf("Error: Number of elements exceeds maximum size of %d.\n",m);
        return 1;
    }
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are\n");
    for (i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}