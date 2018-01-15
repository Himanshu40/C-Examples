#include<stdio.h>
int main(){
  int a1[2][3], a, b;
  for(a=0;a<2;a++){
    for(b=0;b<3;b++)
      scanf("%d", &a1[a][b]);
  }
  for(a=0;a<2;a++){
    printf("\n");
    for(b=0;b<3;b++)
      printf("%d ", a1[a][b]);
}
  return 0;
}
