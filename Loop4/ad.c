#include <stdio.h>
int main(){
  float num, sum=0, average, n=0;
  do{
    printf("Enter any number: ");
    scanf("%f", &num);
    sum=sum+num;
    n++;
  }while(num!=0);
  average=sum/n;
  printf("So the av. of your num is %g.\n", average);
  return 0;
}
