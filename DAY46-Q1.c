// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
int isVowel(char ch) 
{
    return(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}
void removeVowels(char *str)
 {
    int i=0,j=0;
    while(str[i])
     {
        if(!isVowel(str[i]))
         {
            str[j++]=str[i];
        }
        i++;
    }
    str[j]='\0';
}
int main()
 {
    char str[100];
    printf("Enter a string=");
    scanf("%s",str);
    removeVowels(str);
    printf("Output=%s\n", str);
    return 0;
}