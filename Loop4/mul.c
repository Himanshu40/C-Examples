#include <stdio.h>
int main(){
  int num, result, n;
  printf("Enter any number: ");
  scanf("%d", &num);
  for(n=1;n<=10;n++){
    result=num*n;
    printf("%d x %d = %d", num, n, result);
    printf("\n");
  }
  return 0;
}
