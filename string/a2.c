#include<stdio.h>
#include<string.h>
int main(){
  int a, b, c;
  char str[]="HELLO";
  c=strlen(str);
  for(a=c;a>=0;a--){
    printf("\n");
    for(b=0;b<a;b++)
      printf("%c", str[b]);
  }
  return 0;
}
