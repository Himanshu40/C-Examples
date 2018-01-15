#include<stdio.h>
int main(){
  int a, pos, num, c, ar[a];
  char opt;
  printf("Enter a range:- ");
  scanf("%d", &num);
  for(a=0;a<num;a++){
    printf("Enter any number:- ");
    scanf("%d", &ar[a]);
  }
  printf("Do you want delete any number in the series:- Y or N ");
  scanf("%s", &opt);
  if(opt=='Y'){
    printf("Which position:- \n");
    scanf("%d", &pos);
    for(a=num;a>pos;a--)
      ar[pos]=ar[pos+1];
    num--;
    printf("Here is your series:- \n");
    for(a=0;a<num;a++)
      printf(" %d ", ar[a]);
    printf("\n");
  }
  else {
    printf("\nHere is your series:- \n");
    for(a=0;a<num;a++)
    printf(" %d ", ar[a]);
  printf("\n");
}
  return 0;
}
