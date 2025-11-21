#include <stdio.h>
int add(int x, int y){
    return x+y;
}

int main() {
    int a;
    int b;
    int sum;
    
    printf("Enter a\n");
    scanf("%d",&a);
    
    printf("Enter b \n");
    scanf("%d",&b);
    
    sum=add(a,b);
    printf("Their sum is %d",sum);

    return 0;
}