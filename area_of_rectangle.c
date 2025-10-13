#include<stdio.h>

int main(){
	int length, breadth, area;
	printf("Enter length: \n ");
	scanf("%d",&length);
	
	
	printf("Enter breadth: \n");
	scanf("%d",&breadth);
	
	area=length * breadth;
	printf("The area of rectangle is %d \n",area);
	return 0;
}