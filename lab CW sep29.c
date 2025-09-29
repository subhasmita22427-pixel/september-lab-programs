//QUE1
//Write C program to accept the details of employee and display them using structure.
//Details consist of Employee ID, Name, Designation, Department, salary.
#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};
int main() 
{
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee Designation: ");
    scanf("%s", emp.designation);
    printf("Enter Employee Department: ");
    scanf("%s", emp.department);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    return 0;
}

//QUE2
//Write C program to read the details of two workers and calculate total payment of workers using structure.
#include <stdio.h>
struct worker 
{
    char name[50];
    int id;
    float hours_worked;
    float hourly_rate;
};
int main()
 {
    struct worker w1, w2;
    float total_payment;
    printf("Enter details of first worker:\n");
    printf("Name: ");
    scanf("%s", w1.name);
    printf("ID: ");
    scanf("%d", &w1.id);
    printf("Hours Worked: ");
    scanf("%f", &w1.hours_worked);
    printf("Hourly Rate: ");
    scanf("%f", &w1.hourly_rate);
    printf("\nEnter details of second worker:\n");
    printf("Name: ");
    scanf("%s", w2.name);
    printf("ID: ");
    scanf("%d", &w2.id);
    printf("Hours Worked: ");
    scanf("%f", &w2.hours_worked);
    printf("Hourly Rate: ");
    scanf("%f", &w2.hourly_rate);

    total_payment = (w1.hours_worked * w1.hourly_rate) + (w2.hours_worked * w2.hourly_rate);

    printf("\nTotal Payment for both workers: %.2f\n", total_payment);
    return 0;
} 

//QUE3
//Write a program to add two distances in the inch-feet system.
#include <stdio.h>
#include <math.h>
struct Distance 
{
    int feet;
    float inches;
};
int main()
 {
    struct Distance d1, d2, sum;
    printf("Enter first distance (feet inches): ");
    scanf("%d %f", &d1.feet, &d1.inches);
    printf("Enter second distance (feet inches): ");
    scanf("%d %f", &d2.feet, &d2.inches);
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    if (sum.inches >= 12.0)
     {
        sum.feet += (int)(sum.inches / 12);
        sum.inches = fmod(sum.inches, 12.0);
    }
    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);
    return 0;
} 
