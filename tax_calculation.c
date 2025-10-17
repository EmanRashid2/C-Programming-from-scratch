#include<stdio.h>
int main(){
	
	int income;
	float tax;
	printf("Enter your income:  \n");
	scanf("%d",&income);
	
	if(income <= 250000){
		
		tax = 0;
		
	}
	
	else if(income > 250000 && income <= 500000){
		
		tax = (income-250000) * 0.05;
		
	} 
	
	else if(income > 500000 && income <= 1000000){
		
		tax = (500000 - 250000) * 0.05 + (income - 500000) * 0.2;
		
	} 
	
	else{
	
		
		tax = (500000 - 250000) * 0.05 + (1000000 - 500000) * 0.2+ (income-1000000) * 0.3;
		
		
	} 
	
	printf("Your income tax to be paid is %f",tax);
	
	return 0;
}