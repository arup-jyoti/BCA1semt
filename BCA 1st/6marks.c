/*Write a program that calculates the grade of a student based on their marks in a subject using
nested if-else statements. Also print the range of marks for each grade using switch case.*/

#include <stdio.h>

int main() 
{
    int marks;

    // Input the marks from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Calculate grade using nested if-else statements
    char grade;
    if (marks >= 90) {
        grade = 'A';
    } 
        else if (marks >= 80) {
        grade = 'B';
    }   else if (marks >= 70) {
        grade = 'C';
    }   else if (marks >= 60) {
        grade = 'D';
    }   else if (marks >= 50) {
        grade = 'E';
    }   else {
        grade = 'F';
    }

    // Print the calculated grade
    printf("Grade: %c\n", grade);

    // Print the range of marks for each grade using switch case
    switch (grade) {
        case 'A':
            printf("Marks Range: 90-100\n");
            break;
        case 'B':
            printf("Marks Range: 80-89\n");
            break;
        case 'C':
            printf("Marks Range: 70-79\n");
            break;
        case 'D':
            printf("Marks Range: 60-69\n");
            break;
        case 'E':
            printf("Marks Range: 50-59\n");
            break;
        case 'F':
            printf("Marks Range: 0-49\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0;
}
