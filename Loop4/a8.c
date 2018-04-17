#include <stdio.h>
int main(){
  int a, sum=0;
  for(a=7;a<=7777777;a=(a*10)+7){
    sum=sum+a;
  }
  printf("So the sum is :-%d\n", sum);
  return 0;
}
