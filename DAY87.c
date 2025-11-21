/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    enum Role {ADMIN,USER,GUEST};
    enum Role role;
    char input[20];
    printf("Enter role (ADMIN, USER, GUEST)=");
    scanf("%s",input);
    if(strcmp(input,"ADMIN")==0)
    {
        role=ADMIN;
    } 
    else if(strcmp(input,"USER")==0)
    {
        role=USER;
    } 
    else if(strcmp(input,"GUEST")==0)
    {
        role=GUEST;
    } 
    else 
    {
        printf("Invalid role\n");
        return 1;
    }
    switch(role) {
        case ADMIN:
            printf("Welcome Admin\n");
            break;
        case USER:
            printf("Welcome User\n");
            break;
        case GUEST:
            printf("Welcome Guest\n");
            break;
    }
    return 0;
}