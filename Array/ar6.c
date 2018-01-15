#include<stdio.h>
int main(){
  int num, b, c, min, ar[b];
  printf("Enter range:- ");
  scanf("%d", &num);
  b=num;
  for(c=0;c<b;c++){
    printf("Enter any number:- ");
    scanf("%d", &ar[c]);
  }
  min=ar[0];
  for(c=1;c<b;c++)
    if(min>ar[c])
      min=ar[c];
  printf("The largest number:- %d\n", min);
  return 0;
}
