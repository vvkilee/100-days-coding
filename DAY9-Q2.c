/* Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main()
 {
    int per;
    printf("Enter percentage between 0 and 100\n");
    scanf("%d",&per);
    if (per>=90 && per<=100)
     {
        printf("Grade A\n");
    } 
    else if(per>=80 && per<90)
     {
        printf("Grade B\n");
    } 
    else if(per>=70 && per<80)
     {
        printf("Grade C\n");
    }   
    else if(per>=60 && per<70)
     {
        printf("Grade D\n");
    } 
    else if(per<60 && per>=0) 
    {
        printf("Grade F\n");
    } 
    else {
        printf("Invalid input");
    }
    return 0;
}