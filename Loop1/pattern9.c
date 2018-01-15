#include <stdio.h>
int main(){
  int a, b, c;
  for(a=1;a<=5;a++){
    printf("\n");
    for(b=5;b>=a;b--)
      printf(" ");
      for(c=1;c<=a;c++)
        printf("%d", c);
  }
  printf("\n");
  return 0;
}
