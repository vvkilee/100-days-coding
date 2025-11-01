// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int main()
 {
    int n, i;
    int sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
     {
        sum+=arr[i];
    }
    printf("Sum=%d\n",sum);
    return 0;
}