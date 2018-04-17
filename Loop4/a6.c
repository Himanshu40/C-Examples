#include <stdio.h>
int main(){
  int a, sum=0, b;
  for(a=1;a<=225;a++){
    b=a*a;
    sum=sum+b;
  }
  printf("So the sum is:-%d\n", sum);
  return 0;
}
