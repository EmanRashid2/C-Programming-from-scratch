#include<stdio.h>

int main(){
	
	int marks1, marks2, marks3;
	printf("enter marks1 \n");
	scanf("%d",&marks1);
	
	printf("enter marks2 \n");
	scanf("%d",&marks2);
	
	printf("enter marks3 \n");
	scanf("%d",&marks3);
	
	float total=((marks1 +marks2 +marks3)/300.0) *100.0;
	
	if(marks1<33 ||marks2<33 || marks3<33 ){
		
		printf("you are failed due to less marks in individual subject \n");
	}
	
	else if(total<40){
		printf("you are failed due to less percentage \n");
	}
	else{
		printf("Congratulations! you are passed \n");
	}
	
	
	
	return 0;
}