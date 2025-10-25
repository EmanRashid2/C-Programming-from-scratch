#include<stdio.h>
int main(){
	int square,sum=0;
	
	
	for(int i=1; i<=10;i++){
		square=i*i;
		sum=sum+square;
	}
	printf("The sum of 1st ten squares of natural numbers is %d \n",sum);
	
}