#include <stdio.h>
int main(){
  int num, n=1;
  printf("Enter any number:\n");
  scanf("%d", &num);
  while(n<=num/2){
    if(num%n==0)
    printf("%d ", n);
    n++;
  }
  printf("%d\n", num);
  return 0;
}
