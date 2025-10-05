#include <stdio.h>
int main(){
	int number, i;
	int isprime = 1;
	printf("Enter a number: ");
	scanf("%d", &number);
	if(number <= 1){
		isprime = 0;
	}
	else{
		for(i = 2; i < number; i++){
			if (number % i == 0) {
			isprime = 0;
			break;
			}
		}
	}
	if(isprime == 0){
		printf("%d is not a prime number", number); 
	} else { printf("%d is a prime number", number);
	}
	
	return 0;
}
