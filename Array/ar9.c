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
  printf("Do you want add any number in the series:- Y or N ");
  scanf("%s", &opt);
  if(opt=='Y'){
    printf("Which number to add:- \n");
    scanf("%d", &c);
    printf("Which position:- \n");
    scanf("%d", &pos);
    for(a=num;a>=pos;a--)
      ar[a+1]=ar[a];
    num++;
    ar[pos]=c;
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
