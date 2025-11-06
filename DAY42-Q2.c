// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
void convertToUppercase(char str[])
 {
    int i=0;
    while(str[i]!='\0')
     {
        if(str[i]>='a' && str[i]<='z')
         {
            str[i]=str[i]-32;
        }
        i++;
    }
}
int main()
 {
    char str[100];
    printf("Enter a string in lowercase\n");
    scanf("%s",str);
    convertToUppercase(str);
    printf("String in uppercase=%s\n", str);
    return 0;
}