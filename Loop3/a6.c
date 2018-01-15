#include <stdio.h>
int reverse(int num){
  int x, y=0;
  while(num!= 0){
      x=num%10;
      y=y*10+x;
      num/= 10;
  }
  return y;
}
int main()
{
    int n, result;
    printf("Enter an integer: ");
    scanf("%d", &n);
    result=reverse(n);
    printf("Reversed Number = %d\n", result);
    return 0;
}
