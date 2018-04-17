#include <stdio.h>
int main(){
  int a=1, result=0;
  for(;a<=150;a++){
    if(a%3==0 || a%5==0)
    result=result+a;
  }
  printf("So the sum is :- %d\n", result);
  return 0;
}
