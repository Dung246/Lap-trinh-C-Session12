#include<stdio.h>

 int isPrime(int n){
  for (int i=2;i*i <=n;i++){
  	if(n%i==0){
	 return 0;  
	}
  }
	return 1;
 } 
 
 int main(){
  int num1,num2;
   printf("Moi ban nhap vao so thu nhat : ");
   scanf("%d",&num1);   
   printf("Moi ban nhap vao so thu hai :");
   scanf("%d",&num2);
    if(isPrime(num1)){
	 printf("True \n");
	}else{
	 printf("False\n");
	}
	
	if(isPrime(num2)){
     printf("True\n");	
	}else{
	 printf("False\n");
	}
	
	return 0;
 }
