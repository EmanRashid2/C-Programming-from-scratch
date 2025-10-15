#include<stdio.h>
int main(){
	
	int p,r,t, simple_interest;
	printf("Enter value of p \n");
	scanf("%d",&p);
	
	printf("Enter value of r \n");
	scanf("%d",&r);
	
	printf("Enter value of t \n");
	scanf("%d",&t);
	
	simple_interest= (p*r*t)/100;
	printf("The simple interest is %d",simple_interest);
	
	return 0;
}