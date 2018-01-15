#include<stdio.h>
int main(){
	int a, sum=0;
	for(a=1;a<=150;a++){
		if(a%3==0||a%5==0)
		sum=sum+a;
}
printf("Sum of 3+5+6+.....+150= %d\n", sum);
return 0;
}
