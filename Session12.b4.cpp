#include<stdio.h>

 int finding(int arr[],int size){
 	int largest =arr[0];
 	 for(int i=1;i <=size ;i++){
 	 	if(arr[0] > largest){
 	 		largest=arr[i];
		  }
	  }
	  return largest;
 }
 
  int main(){
  	int arr[5]={14,6,3,2,5};
  	int size=sizeof(arr)/sizeof(arr[0]);
  	int largest=finding(arr,size);
  	 printf("So lon nhat trong mang la : %d",largest);
  	
  	return 0;
  }
