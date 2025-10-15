#include<stdio.h>
int main(){
	
	float C,F;
	printf("Enter temperature in celsius: ");
	scanf("%f",&C);
	
	F= (C * 9/5) + 32;
	
	printf("The temperature in fahrenheit is %f",F);
	
	return 0;
	
}
