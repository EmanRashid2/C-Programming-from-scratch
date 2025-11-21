#include<stdio.h>

void calculatePrice(float value);

int main() {
    float value;
    printf("Enter value: \n");
    scanf("%f", &value);
    
    calculatePrice(value);
    return 0;
}

void calculatePrice(float value) {
    value = value + (value * 0.18);
    printf("The final value is %f", value);
}
