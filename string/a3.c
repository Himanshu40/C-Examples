#include<stdio.h>
#include<string.h>
int main(){
  int a, b, c;
  char str[]="HELLO";
  //c=strlen(str);
  for(a=0;a<=5;a++){
    for(b=0;b<a;b++)
      printf("%c", str[b]);
    printf("\n");
  }
  return 0;
}
