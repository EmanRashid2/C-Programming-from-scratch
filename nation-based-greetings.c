#include<stdio.h>

void assalamualikum();
void Bonjour();

int main() {
    char ch;
    printf("Enter your Nationality: \n(P for Pakistani or F for French)\n");
    scanf(" %c", &ch);
    
    if (ch == 'P') {
        assalamualikum();
    }
    else if (ch == 'F') {
        Bonjour();
    }
    else {
        printf("Invalid choice\n");
    }
    
    return 0;
}

void assalamualikum() {
    printf("Assalamualikum!\n");
    return;
}

void Bonjour() {
    printf("Bonjour\n");
    return;
}
