// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
 {
    int number,digit,product=1,odd=0;
    printf("Enter a number\n ");
    scanf("%d",&number);
    while(number>0) 
    {
        digit=number%10;
        if(digit%2!=0) 
        { 
            product*=digit;
            odd=1;
        }
        number/=10;
    }
    if(!odd) 
    {
        product=1;
    }
    printf("Product of odd digits: %d\n", product);
    return 0;
}