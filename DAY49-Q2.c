// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[100];
    int i=0,start=0,word_count=0;
    printf("Enter full name\n");
    fgets(name,sizeof(name),stdin);
    size_t len=strlen(name);
    if(len>0 && name[len-1]=='\n')
     {
        name[len-1]='\0';
    }
    while(name[i]!='\0')
     {
        if((i==0 || name[i-1]==' ') && name[i]!=' ')
         {
            word_count++;
            if(strchr(name+i,' ')!=NULL)
             {
                printf("%c.",name[i]);
            }
             else 
            {
                printf("%s",name+i);
                break;
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}