#include<stdio.h>

int main (void){
	
	
	float tax_rate , salary , tax;
	
	
	printf("enter tax_rate in %%: \n");
	scanf("%f",&tax_rate);
	
	
	printf("enter salary: \n");
	scanf("%f", &salary);
	
	
	//calculating tax
	tax= (tax_rate/100) * salary;
	printf("tax to be paid is %f\n",tax);
	printf("salary after paying tax is %f", salary-tax);
	
	
	return 0;
}