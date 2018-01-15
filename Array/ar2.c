#include<stdio.h>
#include<stdlib.h>
int main(){
  int a[10], b;
  for(b=0;b!=10;b++){
    printf("Enter any number:- ");
    scanf("%d", &a[b]);
    printf("\n");
  }
  for(b=0;b!=10;b++)
    printf(" %d ", a[b]);
  return 0;
}
