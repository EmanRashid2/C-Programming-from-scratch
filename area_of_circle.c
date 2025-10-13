#include<stdio.h>

int main(){
	float radius, area;
	printf("Enter radius: \n ");
	scanf("%f",&radius);

	
	area=3.142 * radius * radius;
	printf("The area of circle is %f \n",area);
	return 0;
}