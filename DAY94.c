/*Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>
struct Student 
{
    char name[50];
    int roll,marks;
};
void printStudent(struct Student s) 
{
    printf("Name=%s | Roll=%d | Marks=%d\n",s.name,s.roll,s.marks);
}
int main() 
{
    struct Student s1;
    sprintf(s1.name,"Neha");
    s1.roll=104;
    s1.marks=92;
    printStudent(s1);
    return 0;
}