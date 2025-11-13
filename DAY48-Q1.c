// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/
#include <stdio.h>
#include <string.h>
int isRotation(const char *str1, const char *str2)
 {
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2) 
    {
        return 0;
    }
    char temp[2*len1+1];
    strcpy(temp,str1);
    strcat(temp,str1);
    return strstr(temp,str2)!=NULL;
}
int main()
 {
    char str1[100], str2[100];
    printf("Enter first string\n");
    scanf("%99s", str1);
    printf("Enter second string\n ");
    scanf("%99s", str2);
    if(isRotation(str1,str2))
     {
        printf("Yes, '%s' is a rotation of '%s'\n", str2, str1);
    }
     else 
    {
        printf("No, '%s' is NOT a rotation of '%s'\n", str2, str1);
    }
    return 0;
}