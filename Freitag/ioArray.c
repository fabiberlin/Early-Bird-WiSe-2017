#include <stdio.h>

void main() {

	printf("Simple I/O using Arrays\n");
	printf("Length of Array? ");

  int numOfElements;
  scanf("%i", &numOfElements);

  int myArray[numOfElements];

  for (int i = 0; i < numOfElements; i++) {
    int value;
    printf("Your Value: ");
    scanf("%i", &value);
    myArray[i] = value;
  }

  printf("Thanks for your input, you inserted:\n");
  for (int i = 0; i < numOfElements; i++) {
    printf("%i\n", myArray[i]);
  }
}
