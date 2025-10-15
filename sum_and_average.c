#include<stdio.h>
int main(){
	
	int a,b,c;
	
	printf("Enter a: ");
	scanf("%d",&a);
	
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("Enter c: ");
	scanf("%d",&c);
	
	
	float sum,average;
	sum=a+b+c;
	
	printf("The sum of 3 integers is %f \n",sum);
	printf("Average of 3 numbers is %f",sum/3);
	
	return 0;
}