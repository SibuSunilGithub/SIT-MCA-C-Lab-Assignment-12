/* Define a structure STUDENT and insert data for ROLL_NO, NAME, and three MARKS. Calculate
the average marks of a student. (Use array within structure concept).
*/
#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    int marks[3];
};

int main()
{
    struct Student S;
    int i, sum = 0;
    float avg;
    printf("Enter The Student Roll No: ");
    scanf("%d", &S.rollno);
    printf("Enter The Name: ");
    scanf(" %[^\n]s", S.name);
    printf("Enter Three Marks: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &S.marks[i]);
        sum += S.marks[i];
    }
    avg = sum / 3.0;
    printf("Name: %s\n", S.name);
    printf("Roll No: %d\n", S.rollno);
    printf("Average Mark Is: %.2f\n", avg);
    return 0;
}