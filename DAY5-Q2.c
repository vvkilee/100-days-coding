/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main()
 {
    int s;
    printf("Enter time in seconds: ");
    scanf("%d", &s);
    int h = s/ 3600;
    int m= (s% 3600) / 60;
    int rs = s% 60;
    printf("Minutes=%d\n",m);
    printf("Hours=%d\n",h);
    printf("Remaining seconds=%d",rs);
    return 0;
}