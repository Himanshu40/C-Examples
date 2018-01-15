#include<stdio.h>
int main(){
  int a, b, n, d, ar[6][6], tran[6][6];
  printf("Enter rows & columns:- ");
  scanf("%d%d", &a, &b);
  printf("Enter the numbers:- \n");
  for(n=0;n<a;n++){
    for(d=0;d<b;d++)
      scanf("%d", &ar[n][d]);
    }
  for(n=0;n<a;n++){
    for(d=0;d<b;d++)
      printf("%d ", ar[n][d]);
    printf("\n");
  }
  printf("now in transpose form:- \n");
  for(n=0;n<a;n++){
    for(d=0;d<b;d++){
      tran[n][d]=ar[d][n];
      printf("%d ", tran[n][d]);
    }
  printf("\n");
  }
  return 0;
}
