// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
void reverse(char *str,int start,int end)
 {
    while(start<end)
     {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
void reverseWords(char *sentence)
 {
    int i=0,start=0;
    int len=strlen(sentence);
    while(i<=len) 
    {
        if(sentence[i]==' ' || sentence[i]=='\0')
         {
            reverse(sentence,start,i - 1);
            start=i+1;
        }
        i++;
    }
}
int main()
 {
    char sentence[200];
    printf("Enter a sentence\n ");
    fgets(sentence,sizeof(sentence),stdin);
    size_t len=strlen(sentence);
    if(len>0 && sentence[len-1]=='\n')
     {
        sentence[len-1]='\0';
    }
    reverseWords(sentence);
    printf("Reversed words=%s\n",sentence);
    return 0;
}