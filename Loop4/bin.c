#include <math.h>
#include <stdio.h>
int decimal(int binary){
  int last, temp, a, result=0, b=0;
  temp=binary;
  while(temp>0){
    last=temp%10;
    temp/=10;
    a=last*pow(2,b);
    b++;
    result=result+a;  }
    return result;
}
int main(){
  int binary;
  int b=5;
  printf("Enter any binary number:-\n");
  scanf("%d", &binary);
  printf("Decimal: %i\n", decimal(binary));
  return 0;
}
