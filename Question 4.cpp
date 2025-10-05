#include<stdio.h>

int main(){
	int n; 
	int i;
	int sum; 
	int num1 = 0;
	int num2 = 1; 
	printf("Enter the number of term for the fibonacci series: ");
	scanf("%d", &n);
	if(n <= 0){
		printf("Please enter a positive number");
	}
	else if(n == 1){
		printf("%d", num1); 
	}
	else{
	printf("%d, %d", num1, num2);
	for(i = 0; i < n - 2; i++){
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf(", %d", sum);
		}
	}
	return 0;
}
