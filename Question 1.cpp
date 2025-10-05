#include<stdio.h>
int main(){
		int number; 
		int factorial = 1;
		int i;
		printf("Enter the number ");
		scanf("%d", &number);
		for(i = 1; i <= number; i++)
		{
			factorial = factorial * i;
		}
		printf("the factorial of the number is %d", factorial);
		return 0;
}

