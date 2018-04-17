#include<stdio.h>
#include<math.h>
int main(){
  int decimal, r, b=0, binary=0;
  printf("Enter any number: ");
  scanf("%d", &decimal);
  while(decimal!=0){
    r=decimal%2;
    binary+=pow(10,b)*r;
    decimal=decimal/2;
    b++;
  }
  printf("Binary:- %d", binary);
}
