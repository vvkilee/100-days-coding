// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main() 
{
    int num,i,n=1;
    printf("Enter an integer\n");
    scanf("%d",&num);
    if(num<=1) 
    {
        n=0;
    } 
    else
     {
        for(i=2;i<=num/2;i++)
         {
            if(num%i==0)
             {
                n=0;
                break;
            }
        }
    }
    if(n)
        printf("Prime\n");
    else
        printf("Not prime");
    return 0;
}