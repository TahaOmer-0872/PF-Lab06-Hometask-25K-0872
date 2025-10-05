#include <stdio.h>
int main(){
	int number, i;
	char choice;
	
	do {
		printf("Enter a number to print its table: ");
		scanf("%d", &number);
		
		printf("Multiplication table of %d:\n", number);
		for (i = 1; i <= 10; i++) {
			printf("%d x %d = %d\n", number, i, number*i);	
		}
		
		printf("Do you want to print another table? (Y/N): ");
		scanf(" %c", &choice);
	} while (choice == 'Y' || choice == 'y');
	
	printf("Program ended");
	return 0;
	}

