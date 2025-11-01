// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() 
{
    int n1,n2,i;
    printf("Enter number of elements in first array\n");
    scanf("%d",&n1);
    int arr1[n1];
    for(i=0;i<n1;i++)
     {
        scanf("%d",&arr1[i]);
    }
    printf("Enter number of elements in second array\n");
    scanf("%d",&n2);
    int arr2[n2];
    for(i=0;i<n2;i++)
     {
        scanf("%d",&arr2[i]);
    }
    int merged[n1+n2];
    for(i=0;i<n1;i++)
     {
     merged[i]=arr1[i];
    }
    for (i=0;i<n2;i++)
     {
     merged[n1+i]=arr2[i];
    }
    for(i=0;i<n1+n2;i++) 
    {
        printf("%d ",merged[i]);
    }
    printf("\n");
    return 0;
}