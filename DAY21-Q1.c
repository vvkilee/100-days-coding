// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>
int main()
 {
    int n,f,l,d=0,t,m,s;
    printf("Enter a number\n");
    scanf("%d",&n);
    t=n;
    l=n%10;
    while(t>0) 
    {
        d++;
        t/=10;
    }
    int p=pow(10,d-1);
    f=n/p;
    if(d==1||f==l)
     {
        printf("Swapped number=%d\n",n);
        return 0;
    }
    m=(n%p)/10;
    s=l*p+m*10+f;
    printf("Swapped number=%d\n",s);
    return 0;
}