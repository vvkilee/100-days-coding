// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
int main() 
{
    char str[100];
    int vowels=0,consonants=0,i;
    printf("Enter a string\n");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i];i++)
     {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
         {
            switch(str[i])
             {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowels++;
                    break;
                default:
                    consonants++;
            }
        }
    }
    printf("Vowels=%d\n", vowels);
    printf("Consonants=%d\n", consonants);
    return 0;
}