#include<stdio.h>
#include<math.h>
int power(int x){
  int result;
  result=x*x;
  return result;
}
float dist(float x1, float x2, float y1, float y2){
  float result;
  result=sqrt(power(x2-x1)+power(y2-y1));
  return result;
}
int main(){
  float x1, x2, y1, y2;
  float result;
  printf("Enter x1,x2,y1,y2: ");
  scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
  result=dist(x1, x2, y1, y2);
  printf("Distance: %f\n", result);
  return 0;
}
