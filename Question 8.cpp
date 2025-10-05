#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int exponent;
	double result;
	printf("Enter the number you require the power of: ");
	scanf("%d", &n);
	printf("Enter the exponent of the power: ");
	scanf("%d", &exponent);
	result = pow(n, exponent);
	printf("the power of %d to the power of %d is %.2lf", n, exponent, result);
	return 0;
}
