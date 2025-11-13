// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
int main() 
{
    char sentence[200];
    int ml=0,cl=0;
    int si=0,ms=0,i;
    printf("Enter a sentence\n");
    fgets(sentence, sizeof(sentence), stdin);
    for(i=0;sentence[i]!='\0';i++)
     {
        if(sentence[i]!= ' '&& sentence[i]!='\n')
         {
            if(cl==0)si=i;
            cl++;
        } 
        else
         {
            if(cl>ml)
             {
                ml=cl;
                ms=si;
            }
            cl=0;
        }
    }
    if(cl>ml)
     {
        ml=cl;
        ms=si;
    }
    printf("Longest word\n");
    for(i=ms;i<ms+ml;i++) 
    {
        putchar(sentence[i]);
    }
    printf("\nLength=%d\n",ml);
    return 0;
}