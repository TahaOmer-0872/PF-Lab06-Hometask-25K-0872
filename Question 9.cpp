#include <stdio.h>
#include <math.h>

int main () {
	int number, r, temp, sum = 0, original,digits = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	original = number;
	temp = number;
	
	if (number < 0){
		printf("please enter a positive number");
		return 0;
	}
	
	while (temp > 0) {
		digits++;
		temp /=10;
	}
	temp = number;
	while (temp > 0) {
		r = temp % 10;
		sum += pow(r, digits);
		temp /= 10;
	}
	
	if (sum == original){
		printf("%d is an armstrong number", original);
	}	else {
		printf("%d is not an armstrong number", original);
	}
	return 0;
}
