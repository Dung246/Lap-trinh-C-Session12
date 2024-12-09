#include<stdio.h>
 
int isPerfect(int n){
 int sum =0;
 for(int i=1;i <= n/2;i++){
  if(n%i ==0) {
  	sum += i;
    }
 }
  return sum;
}
 
int main(){
  int num1,num2;
   printf("Moi ban nhap vao so nguyen thu nhat : ");
   scanf("%d",&num1);
   printf("Moi ban nhap vao so nguyen thu hai :");
   scanf("%d",&num2);
    if(isPerfect(num1)){
	 printf("True \n");
	}else{
	 printf("False\n");	
	}
	if(isPerfect(num2)){
	 printf("True \n");
	}else{
	 printf("False\n");	
	}
 }
 
