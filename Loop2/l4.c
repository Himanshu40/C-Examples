#include<stdio.h>
int main(){
	int a;
	for(a=1;a<=150;a++){
		if(a%3==0)
			printf("%d\n", a);
		else if(a%5==0)
			printf("%d\n", a);
	}
	return 0;
}
