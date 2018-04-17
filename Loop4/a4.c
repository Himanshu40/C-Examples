#include <stdio.h>
int main(){
  int a=1;
  for(;a<=150;a++){
    if(a%3==0 || a%5==0)
      printf("%d\n", a);
  }
  return 0;
}
