/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

  
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main() {
    float pr, r,t;
    printf("Enter Principal: ");
    scanf("%f", &pr);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    float si = (pr*r*t) / 100;
    float ci = pr* pow((1+r/100),t)-pr;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", si,ci);
    return 0;
}