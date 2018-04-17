#include<stdio.h>
float power(float x, int y){
  float result=1;
  int a=1;
  while(a<=y){
    result*=x;
    a++;
  }
  return result;
}
int factorial(int x){
  int result=1;
  while(x>=1){
    result*=x;
    x--;
  }
  return result;
}
float exponent(float x){
  int a=1;
  float result=1;
  while(a<=12){
    result+=power(x,a)/factorial(a);
    a++;
  }
  return result;
}
int main(){
  float x;
  printf("Value of x: ");
  scanf("%f", &x);
  printf("e^x: %f\n", exponent(x));
  return 0;
}
