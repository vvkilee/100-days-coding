// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main() 
{
    int n,k,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of positions to rotate\n");
    scanf("%d", &k);
    k=k%n;
    int temp[n];
    for(i=0;i<n;i++)
     {
        temp[(i+k)%n]=arr[i];
    }
    for(i=0;i<n;i++)
     {
        arr[i]=temp[i];
    }
    printf("Rotated array\n");
    for(i=0;i<n;i++)
     {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}