#include<stdio.h>
int main(){
	int sum=0;
	for(int i=1; i<=19; i++){
		if(i%2!=0){
		
		sum=sum+i;
		
	}
	}
	printf("The sum of 1st ten odd number is %d \n",sum);
	return 0;
}