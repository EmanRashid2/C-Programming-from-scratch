#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);  

    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good Job\n");
            break;
        case 'C':
            printf("Fair\n");
            break;
        case 'D':
            printf("Needs Improvement\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
