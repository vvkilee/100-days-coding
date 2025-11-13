// /Q99: Change the date format from dd/mm/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char input[11]; 
    char output[15]; 
    char month[3]; 
    char *monthNames[]={"Jan", "Feb", "Mar", "Apr", "May", "Jun","Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("Enter date in dd/mm/yyyy format=\n");
    scanf("%10s",input);
    output[0]=input[0];
    output[1]=input[1];
    output[2]='-';
    month[0]=input[3];
    month[1]=input[4];
    month[2]='\0';
    int m=(month[0]-'0')*10+(month[1]-'0');
    strcpy(&output[3],monthNames[m-1]);
    output[6]='-';
    output[7]=input[6];
    output[8]=input[7];
    output[9]=input[8];
    output[10]=input[9];
    output[11]='\0';
    printf("Formatted date=%s\n",output);
    return 0;
}