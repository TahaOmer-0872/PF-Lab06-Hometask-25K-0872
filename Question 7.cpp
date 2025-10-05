#include<stdio.h>
int main(){
	int pass = 1234;
	int checking;
	
	do {
		printf("Enter the 4 digit password: ");
		scanf("%d", &checking);
		
		if (checking != pass) {
			printf("Wrong password, try again");
		}
		
	} while (checking != pass);
	
	printf("You may proceed");
} 
