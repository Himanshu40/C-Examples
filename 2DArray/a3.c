#include<stdio.h>
int main(){
  int a, b, n, n1, n2, n3, ar1[6][6], ar2[6][6], ar3[12][12], row, col;
  printf("Enter the row and range of 1st array:- \n");
  scanf("%d%d", &n, &n1);
  printf("Enter the numbers- ");
  for(a=0;a<n; a++){
      for(b=0;b<n1;b++)
        scanf("%d", &ar1[a][b]);
  }
  printf("Enter the row and range of 2nd array:- \n");
  scanf("%d%d", &n2, &n3);
  printf("Enter the numbers:- ");
  for(a=0;a<n2; a++){
      for(b=0;b<n3;b++)
        scanf("%d", &ar2[a][b]);
  }
  printf("Here is the elements in 1st array:- \n");
  for(a=0;a<n;a++){
    for(b=0;b<n1;b++)
      printf(" %d ", ar1[a][b]);
  }
  printf("\nHere is the elements in 2nd array:- \n");
  for(a=0;a<n2;a++){
    for(b=0;b<n3;b++)
      printf(" %d ", ar2[a][b]);
  }
  col=n1;
  row=n;
  printf("\nHere is the sum of both array:- \n");
  for(a=0;a<row;a++){
    for(b=0;b<col;b++){
      ar3[a][b]=ar1[a][b]+ar2[a][b];
      printf(" %d ", ar3[a][b]);
    }
  }
  printf("\n");
  return 0;
}
