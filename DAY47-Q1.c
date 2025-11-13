// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
int main() 
{
    char str1[100],str2[100];
    int freq[26]={0};  
    int i;
    printf("Enter first string\n");
    scanf("%s",str1);
    printf("Enter second string\n");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++)
     {
        char ch=str1[i];
        if(ch>='a' && ch<='z')
         {
            freq[ch-'a']++;
        }
    }
    for(i=0;str2[i]!='\0';i++)
     {
        char ch=str2[i];
        if(ch>='a' && ch<='z')
         {
            freq[ch-'a']--;
        }
    }
    for(i=0;i<26;i++)
     {
        if(freq[i]!=0)
         {
            printf("Strings are NOT anagrams\n");
            return 0;
        }
    }
    printf("Strings are anagrams\n");
    return 0;
}