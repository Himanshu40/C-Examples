#include <stdio.h>
int main(){
  int num, n, p=0;
  printf("Enter any number:");
  scanf("%d", &num);
  n=num;
  while(n>0){
    if(num%n==0)
    p=p+n;
    n--;
  }
  if(p==num+1)
  printf("So %d is a prime number\n", num);
  else printf("So %d is not a prime number\n", num);
  return 0;
}
