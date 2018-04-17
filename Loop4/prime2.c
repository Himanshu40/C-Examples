#include<stdio.h>

int main(){
	int num, a;
	printf("Enter the number: ");
	scanf("%i", &num);

	for(a=2; a<num/2; a++)
		if(num%a==0){
			printf("%i is not a prime number", num);
			return 0;	}
	printf("%i is a prime number", num);
	return 0;	}
