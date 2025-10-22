#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    printf("Enter c: ");
    scanf("%d", &c);
    
    if (a < b) {
        if (a < c) {
            printf("%d is smallest", a);
        } else {
            printf("%d is smallest", c);
        }
    } 
    else if (b < c) {
        printf("%d is smallest", b);
    } 
    else {
        printf("%d is smallest", c);
    }
    
    return 0;
}