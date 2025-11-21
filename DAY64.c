/* Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
int longestUniqueSubstring(char *s)
 {
    int lastIndex[256];
    int i,start=0,maxLen=0,ch,currLen;
   for(i=0;i<256;i++)
        lastIndex[i]=-1;
    for(i=0;s[i]!='\0';i++)
     {
        ch=(int)s[i];
        if(lastIndex[ch]>=start)
            start=lastIndex[ch]+1;
        lastIndex[ch]=i;
        currLen=i-start+1;
        if(currLen>maxLen)
            maxLen=currLen;
    }
    return maxLen;
}
int main()
 {
    char s[100];
    printf("Enter the string=");
    scanf("%s", s); 
    int result=longestUniqueSubstring(s);
    printf("%d\n",result);
    return 0;
}