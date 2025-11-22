#include<stdio.h>
int main(){

int n;
int count=0;
printf("Enter any number: \n");
scanf("%d",&n);
  
if(n==0){
	count=1;
}
else {
	if(n<0){
		n=-n;
	}
	
	for(  ;n>0;n=n/10){
		count++;
	}
}

printf("Total digits: %d\n", count);
return 0;
}
