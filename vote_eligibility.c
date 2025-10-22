#include <stdio.h>

int main() {

int age;  
char citizenship;  
printf("Enter age: \n ");  
scanf("%d",&age);  
  
printf("Enter citizenship(Y or N):  \n");  
scanf(" %c",& citizenship);  
  
  if(age>=18){  
    if(citizenship=='Y'){  
    printf("You're eligible to vote");  
          
    }  
    else{  
    printf("You're not eligible to vote due to citizenship");  
    }  
  }  
      
  else{  
  printf("You're not eligible to vote due to underage");  
  }  
  

return 0;

}