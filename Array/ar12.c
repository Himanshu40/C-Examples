#include<stdio.h>
int main(){
  printf("Enter 1st array range:- ");
  scanf("%d", &num1);
  printf("Enter 2nd array range:- ");
  scanf("%d", &num2);
  printf("Enter elements of 1st array:- \n");
  for(a=0;a<num1;a++){
    printf("Enter element:- ");
    scanf("%d", ar1[a]);
  }
  printf("Enter the elements of 2nd array:- ");
  for(a=0;a<num2;a++){
    printf("Enter element:- ");
    scanf("%d", ar2[a]);
  }
  n=num1+num2;
  
  return 0;
}
