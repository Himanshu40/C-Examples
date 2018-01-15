#include "stdio.h"
int power(int a, int b){
  int result=1;
  while(b>=1){
    result*=a;
    b--;
  }
  return result;
}
int main(){
  int a, b, result;
  printf("Enter any no with its power:- ");
  scanf("%d%d", &a, &b);
  result=power(a, b);
  printf("Answer:- %d\n", result);
  return 0;
}
