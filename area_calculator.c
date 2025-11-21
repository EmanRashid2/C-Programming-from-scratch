#include <stdio.h>

void areaofsquare(int n);
void areaofrectangle(int a, int b);
void areaofcircle(float radius);

int main() {
    int choice;
    float r;
    int a, b, n;
    

    printf("area of circle (1)\n");
    printf("area of square (2)\n");
    printf("area of rectangle (3)\n");

    
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of circle \n ");
            scanf("%f", &r);
            areaofcircle(r);
            break;
        case 2:
            printf("Enter the length of side \n ");
            scanf("%d", &n);
            areaofsquare(n);
            break;
        case 3:
            printf("Enter the length of rectangle \n ");
            scanf("%d", &a);
            printf("Enter the breadth of rectangle \n ");
            scanf("%d", &b);
            areaofrectangle(a, b);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

void areaofsquare(int n) {
    int area = n * n;
    printf("The area of square is %d\n", area);
}

void areaofrectangle(int a, int b) {
    int area = a * b;
    printf(" The area of rectangle is %d\n", area);
}

void areaofcircle(float r) {
    float area = 3.14 * r * r;
    printf("the area of circle is %f\n", area);
}