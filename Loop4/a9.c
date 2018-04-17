#include<stdio.h>
int main(){
  int a, b;
  for(a=0, b=0;a<10, b<10;a++, b++);
  //for(int a=0, int b=0;a<10;a++,b++);
  printf("%d %d", a, b);
  return 0;
}
