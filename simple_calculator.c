#include <stdio.h>

int main() {
    float a, b;
    char op;
    
    printf("Enter a: ");
    scanf("%f", &a);
    
    printf("Enter b: ");
    scanf("%f", &b);
    
    printf("Choose any operator for your desired operation (*, /, +, -): ");
    scanf(" %c", &op);  
    
    switch(op) {
        case '*':
            printf("Result = %f", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result = %f", a / b);
            } else {
                printf("Cannot divide by 0");
            }
            break;
        case '+':
            printf("Result = %f", a + b);
            break;
        case '-':
            printf("Result = %f", a - b);
            break;
        default:
            printf("Invalid operator choice");
    }

    return 0;
}
