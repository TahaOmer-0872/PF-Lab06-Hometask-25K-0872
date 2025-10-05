#include <stdio.h>
int main(){
	int n;
	int sum = 0;
	for (n = 0; n <= 20; n++){
	
	if (n % 2 != 0){
		sum = n + sum;
	} 
}
	printf("the sum of odd number from 1 to 20 is %d", sum);
	return 0 ;
}
