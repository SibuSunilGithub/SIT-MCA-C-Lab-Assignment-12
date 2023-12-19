/*
Use a menu driven application program to execute the following:
i) Create a structure STD_INFO for storing data of one student with ROLL_NO, NAME, BRANCH,
CGPA and GENDER. Display the size of individual members and the size of the structure
STD_INFO.
ii) Create a union STD_UN with members same as STD_INFO and display the size of STD_UN.
*/

#include <stdio.h>
// Structure student info...
struct std_info
{
    int rollno;
    char name[50];
    char branch[10];
    float cgpa;
    char gender;
};

// Union Student info

union std_info1
{
    int rollno;
    char name[50];
    char branch[10];
    float cgpa;
    char gender;
};

// Main function start

int main()
{
    int enter;
    printf("Menu driven program to execute the following operations.\n");
    printf("Enter - 1 : Execute The Structure Program.\n");
    printf("Enter - 2 : Execute The Union Program.\n");
    scanf("%d", &enter);

    switch (enter)
    {
    case 1:
    {
        struct std_info s1;
        printf("Size Of rollno member is:%lu\n", sizeof(s1.rollno));
        printf("Size Of name  member is:%lu\n", sizeof(s1.name));
        printf("Size Of branch member is:%lu\n", sizeof(s1.branch));
        printf("Size Of cgpa  member is:%lu\n", sizeof(s1.cgpa));
        printf("Size Of gender  member is:%lu\n", sizeof(s1.gender));
        printf("Sise Of Structure std_info Is: %lu\n", sizeof(s1));
    }
    break;
    case 2:
    {
        union std_info1 s1;
        printf("\n");
        printf("Size Of The Union std_info Is: %lu\n", sizeof(s1));
    }
    break;
    default:
        printf("Invalid Input!!!\n");
    }
    return 0;
}