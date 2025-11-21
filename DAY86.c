/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    enum Operation {ADD,SUBTRACT,MULTIPLY};
    enum Operation choice;
    char input[20];
    int a,b;
    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) followed by two integers\n");
    scanf("%19s %d %d",input,&a,&b);
    if(strcmp(input,"ADD")==0) 
    {
        choice=ADD;
    } 
    else if(strcmp(input,"SUBTRACT")==0)
    {
        choice=SUBTRACT;
    } 
    else if(strcmp(input,"MULTIPLY")==0)
    {
        choice=MULTIPLY;
    }
    else 
    {
        printf("Invalid operation\n");
        return 1;
    }
    switch (choice) {
        case ADD:
            printf("%d\n",a+b);
            break;
        case SUBTRACT:
            printf("%d\n",a-b);
            break;
        case MULTIPLY:
            printf("%d\n",a*b);
            break;
    }
    return 0;
}