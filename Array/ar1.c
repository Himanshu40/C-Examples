#include<stdio.h>
int main(){
  int a, num[100], b;
  printf("Enter the no. of elements:- ");
  scanf("%d", &a);
  for(b=0;b<a;b++){
    printf("Enter the %d array:- \n", b);
    scanf("%d", &num[b]);
  }
  printf("Entered values are \n");
  for(b=0;b<a;b++)
    printf(" %d", num[b]);
    printf("\n");
  return 0;
}
