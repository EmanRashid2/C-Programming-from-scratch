#include <stdio.h>

void printhello();
void goodbye();

int main() {
    printhello();
    goodbye();

    return 0;
}

void printhello() {
    printf("Hello! \n");
    return;
}

void goodbye() {
    printf("Goodbye:)!\n");
    return;
}
