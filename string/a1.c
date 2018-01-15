#include<stdio.h>
int main(){
  int a=0, len;
  char str[100];
  printf("Enter any thing:- ");
  scanf("%s", str);
  while(str[a]!='\0')
    a++;
  len=a;
  printf("The length of your any thing :- %d\n", len);
  return 0;
}
