/*Q3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
    int l,b,peri,ar;
    printf("Enter length and breadth:\n");
    scanf("%d %d",&l,&b);
   peri=2*(l+b);
   ar=l*b;
    printf("Perimeter=%d\n",peri);
     printf("Area=%d",ar);
    return 0;
}