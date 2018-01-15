#include<stdio.h>
int is_prime(int num){
  int n, result=0;
  n=num;
  while(n>=1){
    if(num%n==0)
      result+=n;
      n--;
  }
  if(result==num+1)
    return 1;
  else return 0;
}
int main(){
  int a, result;
  printf("Enter any number:- ");
  scanf("%d", &a);
  result=is_prime(a);
  printf("Argument= %d\n", result);
  return 0;
}
