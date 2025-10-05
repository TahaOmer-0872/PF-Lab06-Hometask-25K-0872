#include <stdio.h>
int main(){
	int number, r_new = 0, r;
	printf("enter a value: ");
	scanf("%d", &number);
	
	while (number > 0) {
		r = number % 10;
		r_new = r_new * 10 + r;
		number /= 10;
	}
	
	printf("reveresed number: %d\n", r_new);
	return 0;
}

