#include <stdio.h>

#define STUDENTS 5

int main()
{
    float marks[STUDENTS];
    float sum = 0, highest, lowest, average;

    printf("Enter the marks of %d students:\n", STUDENTS);
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);

        // sum += marks[i];

        if (i == 0)
        {
            highest = lowest = marks[i];
        }

        if (marks[i] > highest)
        {
            highest = marks[i];
        }
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    // average = sum / STUDENTS;

    printf("\nResults:\n");
    printf("Highest Mark: %.2f\n", highest);
    printf("Lowest Mark: %.2f\n", lowest);
    // printf("Average Mark: %.2f\n", average);

    return 0;
}
