#include<stdio.h>

int main(){
	float radius, height, volume;
	printf("Enter radius: \n ");
	scanf("%f",&radius);
	
	printf("Enter height: \n ");
	scanf("%f",&height);

    volume= 3.142 * radius * radius * height;
	printf("The volume of cylinder is %f \n",volume);
	return 0;
}