#include<stdio.h>
int main(){ 
	int number, original, r_new = 0, r;
	printf("Enter a value to determine if its a plindrome or not: ");
	scanf("%d", &number);
	
	original = number;
	
	while (number > 0) {
		r = number % 10;
		r_new = r_new * 10 + r;
		number /= 10;
	}
	if (original == r_new){
		printf("It is a palindrome. \n");
	} else {
		printf("It is not a palindrome. \n");
		
	}
	return 0;
}
