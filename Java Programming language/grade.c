#include <stdio.h>

int main() {
    // Declare variables to store marks of five subjects
    int marks[5];

    // Accept marks of five subjects
    printf("Enter marks of five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate percentage
    float totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += marks[i];
    }
    float percentage = (totalMarks / (5 * 100)) * 100;

    // Determine and print the grade based on the percentage
    printf("\nPercentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}
