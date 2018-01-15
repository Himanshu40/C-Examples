#include<stdio.h>
int main(){
  int a, b, ar[a], group[10]={0};
  for(a=0;a<10;a++){
    printf("Enter marks:-");
    scanf("%d", &ar[a]);
    ++group[(int)(ar[a]/10)];
  }
  printf("**********************\n");
  printf("GROUP\t\tFREQUENCY\n");
  for(a=0;a<10;a++)
    printf("%d\t\t   %d\n", a, group[a]);
  printf("++++++++++++++++++++++++++++++\n");
  printf("GROUP\tFREQUENCY HISTOGRAM\n");
  for(a=0;a<10;a++){
    printf(" %d     | ", a);
    for(b=0;b<group[a];b++)
      printf("*");
      printf("\n");
  }
  return 0;
}
