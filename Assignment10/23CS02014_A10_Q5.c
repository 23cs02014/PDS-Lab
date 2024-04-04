#include <stdio.h>
#include <string.h>

enum PayType
{
    HOURLY,
    SALARY
};

union EmpDetails
{
    float hourlyWage;
    double fixedSalary;
    enum PayType payType;
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
    emp.empdetails.payType = HOURLY;
    emp.empdetails.hourlyWage = 15.5;

    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Pay Type: %s\n", emp.empdetails.payType == HOURLY ? "Hourly" : "Salary");
    // if (emp.empdetails.payType == HOURLY)
    printf("Employee Hourly Wage: %.2f\n", emp.empdetails.hourlyWage);

    emp.empdetails.payType = SALARY;
    emp.empdetails.fixedSalary = 2000.0;

    printf("\nEmployee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Pay Type: %s\n", emp.empdetails.payType == HOURLY ? "Hourly" : "Salary");
    // if (emp.empdetails.payType == SALARY)
    printf("Employee Fixed Salary: %.2f\n", emp.empdetails.fixedSalary);

    return 0;
}
