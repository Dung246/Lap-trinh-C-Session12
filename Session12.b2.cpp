#include<stdio.h>
 
  void InCacPhanTuTrongMang(int arr[],int size) {
  	//int size=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<size;i++){
    	printf("Phan tu thu %d la %d\n",i+1,arr[i]);
     }
  }

 int main() {
 	 int number[]={1,2,3,4,5,6};
     InCacPhanTuTrongMang(number,6);
  return 0;
 }
