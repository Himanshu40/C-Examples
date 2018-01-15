#include <stdio.h>
int main(){
  char a, b;
  for(a=65;a<=70;a++){
    for(b=65;b<=a;b++)
      printf("%c", b);
      printf("\n");
  }
  return 0;
}
