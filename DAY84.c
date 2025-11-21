/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    enum Status {SUCCESS,FAILURE,TIMEOUT};
    enum Status result;
    char input[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT)=");
    scanf("%s",input);
    if(strcmp(input,"SUCCESS")==0)
    {
        result=SUCCESS;
    } 
    else if(strcmp(input,"FAILURE")==0)
    {
        result=FAILURE;
    }
    else if(strcmp(input,"TIMEOUT")==0)
    {
        result=TIMEOUT;
    } 
    else
    {
        printf("Invalid input\n");
        return 1;
    }
    switch (result) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }
    return 0;
}