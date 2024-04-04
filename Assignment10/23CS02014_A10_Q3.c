#include <stdio.h>
#include <string.h>
union EmpDetails
{
    float hourlyWage;
    double fixedSalary;
};
struct Employee
{
    int id;
    char name[50];
    union EmpDetails empdetails;
};

int main()
{
    struct Employee emp;

    emp.id = 1;
    strcpy(emp.name, "Vikranth");
    emp.empdetails.hourlyWage = 15.5;

    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Fixed Salary: %.2f\n", emp.empdetails.fixedSalary);
    printf("Employee Hourly Wage: %.2f\n", emp.empdetails.hourlyWage);

    emp.empdetails.fixedSalary = 20;
    printf("\nEmployee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Fixed Salary: %.2f\n", emp.empdetails.fixedSalary);
    printf("Employee Hourly Wage: %.2f\n", emp.empdetails.hourlyWage);
    return 0;
}
/* Here, union is used as only one value is required, either the hourly wage or the fixed salary*/