// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
int main() 
{
    char str[200];
    int i;
    printf("Enter a string\n");
    scanf("%[^\n]s", str);  
    for(i=0;str[i]!='\0';i++)
     {
        if(str[i]==' ')
         {
            str[i]='-';
        }
    }
    printf("Modified string=%s\n",str);
    return 0;
}