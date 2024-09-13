/*Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00*/
#include<stdio.h>
int main(){
    int employee_id;
    float working_hrs;
    float salary_per_hrs;
    printf("Enter Employee Id : ");
    scanf("%d",&employee_id);
    printf("Enter Working Hours : ");
    scanf("%f",&working_hrs);
    printf("Enter Salary Per Hour : ");
    scanf("%f",&salary_per_hrs);
    printf("Employee Id = %d \nSalary = U$ %f \n",employee_id,salary_per_hrs*working_hrs);
    return 0;
}