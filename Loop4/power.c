#include<stdio.h>
int power(int x){
  int result;
  result=x*x;
  return result;
}
int main(){
  int a;
  printf("Enter the value of x: ");
  scanf("%d", &a);
  printf("Value of x^2: %d\n", power(a));
  return 0;
}
