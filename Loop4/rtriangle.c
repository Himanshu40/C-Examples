#include<stdio.h>
#include<math.h>
int power(int x){
  int result;
  result=x*x;
  return result;
}
float c(float a, float b){
  float result=sqrt(power(a)+power(b));
  return result;
}
int main(){
  float a, b;
  float result;
  printf("Enter a and b: ");
  scanf("%f%f", &a, &b);
  result=c(a, b);
  printf("c of right triangle: %f\n", result);
  return 0;
}
