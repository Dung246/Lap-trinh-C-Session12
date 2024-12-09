#include<stdio.h>

 int giai_thua(int n){
  int result =1;
  for(int i=1;i<= n;i++){
   result *=i;
  }
  return result;
 }
 
int main() {
   int number;
    printf("Moi ban nhap vao 1 phan tu : ");
    scanf("%d",&number);
   int result=giai_thua(number);
    printf("Giai thua cua %d la : %d ",number,result);
    
  return 0;
}
