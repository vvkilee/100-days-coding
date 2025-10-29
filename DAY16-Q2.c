//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/ 
#include <stdio.h>
int main()
 {
    int n,store,rev = 0,temp;
    printf("Enter a number\n");
    scanf("%d",&n);
    store=n;
    while (n != 0) {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if (store==rev) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}