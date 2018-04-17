#include <stdio.h>
int main(){
  int num, divisor, temp, divisor1;
  printf("Enter any number:-\n");
  scanf("%d", &num);
  temp=num;
  while(temp>0){
    divisor=num/temp;
    divisor1=num%temp;
    if(divisor1==0)
      printf("%d ", divisor);
    temp--;
  }
  printf("\n");
  return 0;
}
