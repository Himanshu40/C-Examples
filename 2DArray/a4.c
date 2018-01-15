#include "stdio.h"
int main(){
  int a, b, c, d, e, f, g, ar1[5][5], ar2[5][5], ar3[10][10];
  printf("Enter the rows & columns of 1st array:- ");
  scanf("%d%d", &a, &b);
  printf("Enter the rows & columns of 2nd array:- ");
  scanf("%d%d", &c, &d);
  if(b==c){
    printf("Enter the numbers of 1st array:- ");
    for(e=0;e<a;e++)
      for(f=0;f<b;f++)
        scanf("%d", &ar1[e][f]);
    printf("Enter the number in 2nd array:- ");
    for(e=0;e<c;e++)
      for(f=0;f<d;f++)
        scanf("%d", &ar2[e][f]);
    printf("Here is the multiplication of two matrices:- ");
    for(e=0;e<a;e++){
      for(f=0;f<b;f++){
        ar3[e][f]=0;
          for(g=0;g<b;g++)
            ar3[e][f]+=ar1[e][g]*ar2[g][f];
      }
    }
    printf("\n");
    for(e=0;e<c;e++){
      for(f=0;f<d;f++)
        printf(" %d ", ar3[e][f]);
      printf("\n");
      }
  }
  else printf("Columns of 1st array is not equal to 2nd array");
  return 0;
}
