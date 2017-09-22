#include <stdio.h>
#include <limits.h>
void main(){
	printf("Average calculator\n");
	printf("How many elements? ");
	int numOfElements;
	scanf("%i", &numOfElements);
	int myArray[numOfElements];
	for (int i = 0; i < numOfElements; i++) {
		int value;printf("Your Value: ");
		scanf("%i", &value);
		myArray[i] = value;
	}
	printf("Thanks for your input.\n");
	int sum = 0;
	for (int i = 0; i < numOfElements; i++) {
		sum += myArray[i];
	}
	float average = sum / (float)numOfElements;
	printf("The average value is: %f\n", average);


	int min = INT_MAX;
	for (int i = 0; i < numOfElements; i++) {
		if (myArray[i] < min) {
			min = myArray[i];
		}
	}
	printf("The minimum value is: %i\n", min);


	int max = INT_MIN;
	for (int i = 0; i < numOfElements; i++) {
		if (myArray[i] > max) {
			max = myArray[i];
		}
	}
	printf("The maximum value is: %i\n", max);

}
