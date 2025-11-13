// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; 
    int i,index;
    printf("Enter a string\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0'; i++) {
        char ch=str[i];
        if(ch>='a' && ch<='z')
         {
            index=ch-'a';
            freq[index]++;
            if(freq[index]==2)
             {
                printf("First repeating lowercase alphabet=%c\n", ch);
                return 0;
            }
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}