//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include<stdio.h>
int main()
 {
    int n,p=1,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (i=2;i<=n;i=i+2)
     {
        p=p*i;
    }
    printf("Product of even numbers from 1 to %d is: %d\n", n, p);
    return 0;
}