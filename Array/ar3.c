#include<stdio.h>
#include<stdlib.h>
int main(){
  int num, b, ar[b], c, max;
  printf("Enter any number for random:- ");
  scanf("%d", &num);
  b=num;
  max=num;
  for(c=0;c<b;c++)
    printf("%d ", rand()%max);
  return 0;
}
