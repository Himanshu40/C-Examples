#include<stdio.h>
int main(){
  int num, b, ar[b], min, pos, c;
  printf("Enter a range:- ");
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
  for(c=0;c<b;c++)
    if(min==ar[c])
      pos=c+1;
  printf("The smallest number:- %d\n", min);
  printf("The pos of smallest number:- %d\n", pos);
  return 0;
}
