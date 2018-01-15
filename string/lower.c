#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
  char ch[20], ch1;
  int countl=0, a=0;
  printf("Enter any character or sentence:- ");
  fgets(ch, sizeof(ch), stdin);
  printf("Do you want count lower alphabets? (Y/N)\n");
  ch1=getchar();
  switch(ch1){
    case 'Y': while(ch[a]!='\0'){
                  if(islower(ch[a]))
                    countl++;
                    a++;
                  }
              printf("So the no of small alphabets are :- %d", countl);
              break;
  case 'N': printf("So your word is:- ");
            puts(ch);
            break;
  default: printf("Sorry, you have not enetered anything!!!!!");
            break;
  }
  printf("\n");
  return 0;
}
