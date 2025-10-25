#include<stdio.h>
int main(){
	int sum=0;
	for(int i=2; i<=20; i++){
		if(i%2==0){
		
		sum=sum+i;
		
	}
	}
	printf("The sum of 1st ten even numbers is %d \n",sum);
	return 0;
}