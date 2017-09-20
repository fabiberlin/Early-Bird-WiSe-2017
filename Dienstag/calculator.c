#include <stdio.h>

int main() {
	printf("Welcome to this simple Calculator!");

	int first;
	int second;
	char operator;

	printf("\nEnter your first number: ");
	scanf("%i", &first);

	printf("Which calculation (+ - * /): ");
	scanf(" %c", &operator);

	printf("Enter your second number: ");
	scanf("%i", &second);

	int result;

	if (operator == '+') {
		result = first + second;
	}
	else if (operator == '-') {
		result = first - second;
	}
	else if (operator == '*') {
		result = first * second;
	}
	else if (operator == '/') {
		result = first / second;
	}
	else {
		printf("Imput seems to be corrupt\n");
		return 0;
	}
	printf("Result is: %i\n", result);
	return 0;
}
