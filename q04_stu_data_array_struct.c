// Use the data of Q.3 and find the average marks of five students.(Use array of structure concept.)

#include <stdio.h>

struct Student
{
	int rollno;
	char name[50];
	int marks[3];
};

int main()
{
	struct Student Stu[5];
	int i, j;
	float avg_mark[5];

	for (i = 0; i < 5; i++)
	{
		printf("Enter The %d Student Roll No: ", i + 1);
		scanf("%d", &Stu[i].rollno);
		printf("Enter The Name: ");
		scanf(" %[^\n]s", Stu[i].name);
		printf("Enter Three Marks: ");
		int sum = 0;
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &Stu[j].marks[j]);
			sum += Stu[j].marks[j];
		}
		avg_mark[i] = sum / 3.0;
	}

	for (i = 0; i < 5; i++)
	{
		printf("Student Name: %s  ", Stu[i].name);
		printf("Average Mark Is: %.1f\n", avg_mark[i]);
	}

	return 0;
}
