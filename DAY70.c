/* Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
int main() 
{
    char str[1000];
    int i=0;
    printf("Enter a string=");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0') 
    {
        if(i==0 && str[i]>='a' && str[i]<='z')
         {
            str[i]=str[i]-('a'-'A');
        }
        else if(str[i]==' ' && str[i+1]>='a' && str[i+1]<='z')
         {
            str[i+1]=str[i+1]-('a'-'A');
        }
        i++;
    }
    printf("Sentence case=%s",str);
    return 0;
}