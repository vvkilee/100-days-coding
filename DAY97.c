/* Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() 
{
    struct Employee emp, emp_read;
    FILE *fp;
    printf("Enter Employee ID=");
    scanf("%d",&emp.id);
    printf("Enter Employee Name=");
    scanf("%s",emp.name);
    printf("Enter Employee Salary=");
    scanf("%f",&emp.salary);
    fp=fopen("employee.dat","wb");
    if(fp==NULL) 
    {
        printf("Error opening file for writing\n");
        exit(1);
    }
    fwrite(&emp,sizeof(struct Employee),1,fp);
    fclose(fp);
    printf("\nEmployee details entered and stored in file.\n");
    fp=fopen("employee.dat","rb");
    if(fp==NULL) 
    {
        printf("Error opening file for reading\n");
        exit(1);
    }
    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nDisplaying employee data read from file=\n");
    printf("ID=%d\n", emp_read.id);
    printf("Name=%s\n", emp_read.name);
    printf("Salary=%.2f\n", emp_read.salary);
    return 0;
}