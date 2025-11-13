// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>
int main()
 {
    int i,j,k;
    char str[100];
    printf("Enter a string=\n");
    scanf("%s",str);
    int len=strlen(str);
    printf("Substrings are=\n");
    for(i=0;i<len;i++)
     {
        for(j=i;j<len;j++) 
        {
            for(k=i;k<=j;k++)
             {
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}