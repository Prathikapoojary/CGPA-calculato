#include <stdio.h>

int main() {
    int numSubjects, i;
    float grade, totalGradePoints = 0.0, cgpa;

    // Prompt user for the number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    // Loop to get grades for each subject
    for (i = 1; i <= numSubjects; i++) {
        printf("Enter grade for subject %d (0.0 - 4.0): ", i);
        scanf("%f", &grade);

        // Validate input
        if (grade < 0.0 || grade > 4.0) {
            printf("Invalid grade entered. Please enter a value between 0.0 and 4.0.\n");
            i--; // Decrement to repeat this iteration
            continue; // Skip to the next iteration
        }

        totalGradePoints += grade; // Accumulate total grade points
    }

    // Calculate CGPA
    cgpa = totalGradePoints / numSubjects;

    // Display the result
    printf("Your CGPA is: %.2f\n", cgpa);

    return 0;
}
