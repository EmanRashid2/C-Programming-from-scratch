#include<stdio.h>
int main(){
	
	int n;
	printf("Enter any number: \n");
	scanf("%d",&n);
	
	if(n % 97 == 0){
		printf("The number is divisible by 97");
	}
	
	else{
		printf("The number is not divisible by 97");
	}
	
	return 0;
}