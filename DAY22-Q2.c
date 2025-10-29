// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>
int main()
 {
    int n,i,num,dem;
    float sum=0.0;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
for(i=0;i<n;i++)
 {
     num=2*i+1;
     dem=(i==0)?1:(2*i+2);
     sum+=(float)num/dem;
    }
    printf("Approximate sum: %.2f\n",sum);
    return 0;
}