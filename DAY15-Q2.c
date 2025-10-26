//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main()
 {
    int n,rev=0,temp;
    printf("Enter a number\n");
    scanf("%d",&n);
    while (n!=0)
     {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    printf("Reversed Number: %d\n", rev);
    return 0;
}