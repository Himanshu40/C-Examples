#include "stdio.h"
int main(){
  int num, b, ar[b], c, sum=0;
  float mean, n;
  printf("Enter a range:- ");
  scanf("%d", &num);
  b=num;
  for(c=0;c<b;c++){
    printf("Enter any number:- ");
    scanf("%d", &ar[c]);
  }
  for(c=0;c<b;c++)
    sum+=ar[c];
  n=b;
  mean=sum/n;
  printf("The sum of array:- %d\n", sum);
  printf("The mean:- %f\n", mean);
  return 0;
}
