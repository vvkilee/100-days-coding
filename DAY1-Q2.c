/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
    int a,b,s=0,p=1,d=0;
    float q;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    s=a+b;
    d=a-b;
    p=a*b;
    q=a/b;
    printf("Sum=%d\n",s);
    printf("Difference=%d\n",d);
    printf("Product=%d\n",p);
    printf("Quotient=%f",q);
    return 0;
}