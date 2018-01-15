#include<stdio.h>
int main(){
  int num, b, c, max, ar[b];
  printf("Enter range:- ");
  scanf("%d", &num);
  b=num;
  for(c=0;c<b;c++){
    printf("Enter any number:- ");
    scanf("%d", &ar[c]);
  }
  max=ar[0];
  for(c=1;c<b;c++)
    if(max<ar[c])
      max=ar[c];
  printf("The largest number:- %d\n", max);
  return 0;
}
