/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
int main() 
{
    FILE *fp;
    int i,n;
    struct Student
     {
        char name[50];
        int roll;
        int marks;
    } s;
    fp=fopen("students.txt","w");
    if(fp==NULL) 
    {
        printf("Error,Cannot create file\n");
        return 1;
    }
    printf("Enter number of students=");
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        printf("Enter name, roll, marks for student %d:\n", i + 1);
        scanf("%s %d %d", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    fp=fopen("students.txt","r");
    if(fp==NULL) 
    {
        printf("Error,Cannot open file\n");
        return 1;
    }
    printf("\nStudent Records=\n");
    while(fscanf(fp,"%s %d %d",s.name,&s.roll,&s.marks)==3) 
    {
        printf("Name=%s | Roll=%d | Marks=%d\n",s.name,s.roll,s.marks);
    }
    fclose(fp);
    return 0;
}