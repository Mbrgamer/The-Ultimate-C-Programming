// GPA CALCULATOR BY MUBASHIR
/* Grade Table
PROGRAM   ACTUAL 
A=4.0     A
B=3.67    A-    
C=3.33    B+ 
D=3.0     B
E=2.67    B-  
F=2.33    C+
G=2.0     C
H=1.67    C-
I=1.33    D+
J=1       D
F=O(FAIL) F
*/

#include <stdio.h>

int main() {
    float number_of_subject;
    char Grade;
    float gpa;
    float credit_attempted = 0.0;
    float total_weighted_score = 0.0;
    float per_subject_credit;

    // Print the grade table
    printf("PROGRAM   ACTUAL\n"
           "A=4.0     A\n"
           "B=3.67    A-\n"
           "C=3.33    B+\n"
           "D=3.0     B\n"
           "E=2.67    B-\n"
           "F=2.33    C+\n"
           "G=2.0     C\n"
           "H=1.67    C-\n"
           "I=1.33    D+\n"
           "J=1       D\n"
           "F=O(FAIL) F\n");

    printf("Enter Number of Subjects: ");
    scanf("%f", &number_of_subject);

    for (int i = 1; i <= number_of_subject; i++) {
        printf("Enter Subject %d Credit: ", i);
        scanf("%f", &per_subject_credit);
        credit_attempted += per_subject_credit;

        printf("Enter Subject %d Grade (Capital Letters): ", i);
        scanf(" %c", &Grade); // Notice the space before %c to skip any leftover whitespace

        // Convert the grade to the corresponding grade points and calculate total weighted score
        if (Grade == 'A') {
            total_weighted_score += per_subject_credit * 4.00;
        } else if (Grade == 'B') {
            total_weighted_score += per_subject_credit * 3.67;
        } else if (Grade == 'C') {
            total_weighted_score += per_subject_credit * 3.33;
        } else if (Grade == 'D') {
            total_weighted_score += per_subject_credit * 3.00;
        } else if (Grade == 'E') {
            total_weighted_score += per_subject_credit * 2.67;
        } else if (Grade == 'F') {
            total_weighted_score += per_subject_credit * 2.33;
        } else if (Grade == 'G') {
            total_weighted_score += per_subject_credit * 2.00;
        } else if (Grade == 'H') {
            total_weighted_score += per_subject_credit * 1.67;
        } else if (Grade == 'I') {
            total_weighted_score += per_subject_credit * 1.33;
        } else if (Grade == 'J') {
            total_weighted_score += per_subject_credit * 1.00;
        } else if (Grade == 'F') {
            total_weighted_score += per_subject_credit * 0.00;
        } else {
            printf("Invalid Grade\n");
            return 1; // Exit the program with an error code
        }
    }

    // Calculate GPA
    if (credit_attempted > 0) {
        gpa = total_weighted_score / credit_attempted;
        printf("Credit Attempted = %.2f\n", credit_attempted);
        printf("Your GPA is %.3f\n", gpa);
    } else {
        printf("No credits attempted. Cannot calculate GPA.\n");
    }

    return 0;
}
