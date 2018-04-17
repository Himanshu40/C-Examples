#include<stdio.h>
int power(int x, int n){
  int result=1, p=1;
  while(p<=n){
    result*=x;
    p++;
  }
  return result;
}
int main(){
  int no, pow1;
  printf("Enter any number and its power: ");
  scanf("%d%d", &no, &pow1);
  printf("Answer: %d\n", power(no, pow1));
  return 0;
}
