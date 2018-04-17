#include<stdio.h>
int factorial(int y){
  float result1=1;
  while(y>=1){
    result1*=y;
    y--;
  }
  return result1;
}
int choose(int n, int r){
  int result;
  result=factorial(n)/(factorial(r)*factorial(n-r));
  return result;
}
int main(){
  int n, r;
  printf("Enter n & r: ");
  scanf("%d%d", &n, &r);
  printf("The no. of ways to choose: %d\n", choose(n, r));
  return 0;
}
