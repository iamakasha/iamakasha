#include <stdio.h>

int main() {
    int totalMarks;
    char grade[3];  // To accommodate grades like "A+", "B-", etc. if needed
    char *result;

    // Input total marks
    printf("Enter total marks (out of 100): ");
    scanf("%d", &totalMarks);

    // Validate input
    if (totalMarks < 0 || totalMarks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        return 1;
    }

    // Determine grade and result
    if (totalMarks >= 90) {
        strcpy(grade, "A");
        result = "Pass";
    } else if (totalMarks >= 80) {
        strcpy(grade, "B");
        result = "Pass";
    } else if (totalMarks >= 70) {
        strcpy(grade, "C");
        result = "Pass";
    } else if (totalMarks >= 60) {
        strcpy(grade, "D");
        result = "Pass";
    } else {
        strcpy(grade, "F");
        result = "Fail";
    }

    // Output result
    printf("Grade: %s\n", grade);
    printf("Result: %s\n", result);

    return 0;
}
