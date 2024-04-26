//
// Created by Admin on 26/4/24.
//

#include <stdio.h>

char calculateGrade(int marks) {
    char grade;
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    return grade;
}

int vd12() {
//int main() {
    int marks;
    printf("Mark >= 90 ==> Grade: A\n");
    printf("Mark >= 80 ==> Grade: B\n");
    printf("Mark >= 70 ==> Grade: C\n");
    printf("Mark >= 60 ==> Grade: D\n");
    printf("Mark < 60 ==> Grade: F\n");
    printf("Enter marks:\n");
    scanf("%d", &marks);

    char grade = calculateGrade(marks);
    printf("Grade: %c\n", grade);

    return 0;
}
