#include <stdio.h>
#include <string.h>

// Define the structure named 'Employee'
struct Employee {
    char name[25];        // Name with a maximum of 25 characters
    int id;               // ID as an integer
    char department[30];  // Department with a maximum of 30 characters (adjusted for longer names)
    float salary;         // Salary as a float
    char email[50];       // Email with a maximum of 50 characters
};

int main() {
    // Declare and initialize an employee variable with the given data
    struct Employee emp = {
        "John Doe",               // name
        12345,                    // id
        "Human Resources",        // department
        55000.50,                 // salary
        "john.doe@company.com"    // email
    };

    // Display the initialized employee details
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}