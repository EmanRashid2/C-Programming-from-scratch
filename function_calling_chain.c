#include <stdio.h>
void Dubai(){
    printf("You are in Dubai! \n");
    return;
}
void India(){
    printf("You are in India!\n");
    Dubai();
    return;
}
void Pakistan(){
    printf("You are in Pakistan! \n");
    India();
    return;
}
int main() {
    Pakistan();
    return 0;
}