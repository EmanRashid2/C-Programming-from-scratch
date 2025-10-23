#include <stdio.h>

int main() {
    float a, b;
    char arithmetic;
    
    printf("Enter the value of a: \n");
    scanf("%f", &a);
    printf("Enter the value of b: \n");
    scanf("%f", &b);
    
    int op;
    printf("Enter any operation:\n 1 for Arithmetic operation\n 2 for comparison operation \n");
    scanf("%d", &op);
    
    switch(op) {
        case 1:
            printf("Arithmetic operation\n");
            printf("Choose any operator for your desired operation(*,/,+,-) \n");
            scanf(" %c", &arithmetic);
            
            switch(arithmetic) {
                case '*':
                    printf("%f", a * b);
                    break;
                case '/':
                    if(b != 0) {
                        printf("%f", a / b);
                    } else {
                        printf("Cannot divide by 0.0 \n");
                    }
                    break;
                case '+':
                    printf("%f", a + b);
                    break;
                case '-':
                    printf("%f", a - b);
                    break;
                default:
                    printf("invalid operator choice \n");
            }
            break;
            
        case 2:
            printf("\nComparison operation \n");
            if(a > b) {
                printf("%f is greater", a);
            } else if(a < b) {
                printf("%f is greater", b);
            } else {
                printf("%f and %f are equal", a, b);
            }
            break;
            
        default:
            printf("invalid option");
    }

    return 0;
}