#include<stdio.h>
int factorial(int num){
  int result=1;
  while(num>=1){
    result*=num;
    num--;
  }
  return result;
}
int main(){
  int a, result;
  printf("Enter any number:- ");
  scanf("%d", &a);
  result=factorial(a);
  printf("Factorial:- %d\n", result);
  return 0;
}
