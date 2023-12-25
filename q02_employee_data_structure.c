/*
Define a structure EMPLOYEE for receiving and displaying information like EID, NAME, GENDER, SALARY, and ADDRESS of an employee. The ADDRESS should be stored as (CITY,STATE,
PINCODE) using nested structure.
*/

#include <stdio.h>
// Address Structure
struct Address
{
    char city[10];
    char state[10];
    int pin[10];
};
// Employee Structure
struct Employee
{
    int eid;
    char name[50];
    char gender;
    int salary;
    struct Address address;
};

// Main function start
int main()
{
    struct Employee E1;
    // Taking Inputs
    printf("Enter The Employee ID: ");
    scanf("%d", &E1.eid);
    printf("Enter The Employee Name: ");
    scanf(" %[^\n]s", E1.name);
    printf("Enter The Employee Gender(M/F/O): ");
    scanf(" %c", &E1.gender);
    printf("Enter The Employee Salary: ");
    scanf("%d", &E1.salary);
    printf("Enter The Employee Address\n");
    printf("Enter City: ");
    scanf("%s", E1.address.city);
    printf("Enter State: ");
    scanf("%s", E1.address.state);
    printf("Enter Pin: ");
    scanf("%d", &E1.address.pin);

    // Print Output Data
    printf("Employee ID: %d\n", E1.eid);
    printf("Employee Name: %s\n", E1.name);
    printf("Employee Gender: %c\n", E1.gender);
    printf("Employee Salary: %d\n", E1.salary);
    printf("Employee Address: %s,%s,%d\n", E1.address.city, E1.address.state, E1.address.pin);
    return 0;
}
