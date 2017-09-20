#include <stdio.h>

void main() {

  printf("Please enter a number: ");

  int number;
  scanf("%i", &number);

  if (number % 2 == 0) {
    printf("%i is an even number\n", number);
  }else{
    printf("%i is an odd number\n", number);
  }
}
