#include <stdio.h>

int main() {
    int marks1, marks2, marks3;
    float avg;

    printf("Enter marks of subject 1: \n");
    scanf("%d", &marks1);
    
    printf("Enter marks of subject 2: \n");
    scanf("%d", &marks2);
    
    printf("Enter marks of subject 3: \n");
    scanf("%d", &marks3);
    
    avg = ((marks1 + marks2 + marks3) / 300.0) * 100.0;

    if (avg >= 90) {
        printf("Your grade is A+");
    }
    else if (avg >= 80) {   
        printf("Your grade is A");
    }
    else if (avg >= 70) {
        printf("Your grade is B");
    }
    else if (avg >= 60) {
        printf("Your grade is C");
    }
    else if (avg >= 50) {
        printf("Your grade is D");
    }
    else {
        printf("You're fail!");
    }

    return 0;
}