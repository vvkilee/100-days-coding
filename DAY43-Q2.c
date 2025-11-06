// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() 
{
    char str[100];
    int length=0,i,flag=0;
    printf("Enter a string\n");
    scanf("%s",str);
    while(str[length]!='\0')
     {
        length++;
    }
    for(i=0;i<length/2;i++)
     {
        if(str[i]!=str[length-i-1])
         {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
    return 0;
}
