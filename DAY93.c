/*Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    int marks;
};
int main() 
{
    int n,i,topperIndex=0;
    struct Student students[100]; 
    printf("Enter number of students=");
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        printf("Enter details of student %d\n",i+1);
        printf("Name=");
        scanf("%s",students[i].name);
        printf("Roll=");
        scanf("%d",&students[i].roll);
        printf("Marks=");
        scanf("%d",&students[i].marks);   
        if(students[i].marks>students[topperIndex].marks) 
        {
            topperIndex=i;
        }
    }
    printf("\nTopper= %s (Marks=%d)\n",students[topperIndex].name,students[topperIndex].marks);
    return 0;
}