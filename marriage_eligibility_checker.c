#include<stdio.h>
int main(){
	int age;
	char gender;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter your gender(M for male and F for female): ");
	scanf(" %c",&gender);
	
	if(gender=='M'){
		if(age>=21){
			printf("You are eligible to marry");
		}
		else {
		printf("You are not eligible to marry");
	}
}
	
	
	else if(gender=='F'){
		if(age>=18){
			printf("You are eligible to marry");
		}
		else 
		{
		printf("You are not eligible to marry");
	}
	}
	
	else{
		printf("invalid choice");
	}
	
	return 0;
}