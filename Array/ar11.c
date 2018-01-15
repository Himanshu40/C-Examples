#include<stdio.h>
int main(){
  int num, num2, n, a, ar1[a], ar2[a], ar3[a];
  printf("Enter a range of 1st array(x<15):- ");
  scanf("%d", &num);
  printf("Enter a range of 2nd array(x<15):- ");
  scanf("%d", &num2);
  n=num+num2;
  printf("Enter the elements of 1st array:- \n");
  for(a=0;a<num;a++){
    printf("Enter elements:- ");
    scanf("%d", &ar1[a]);
  }
  printf("Enter the elements of 2nd array:- \n");
  for(a=0;a<num2;a++){
    printf("Enter elements:- ");
    scanf("%d", &ar2[a]);
  }
  for(a=0;a<num;a++)
    ar3[a]=ar1[a];
  for(a=0;a<num2;a++){
    ar3[num]=ar2[a];
    num++;
  }
  printf("Here is the series:- \n");
  for(a=0;a<n;a++)
    printf(" %d ", ar3[a]);
  printf("\n");
  return 0;
}
