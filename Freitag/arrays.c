#include <stdio.h>

void main() {

  int myArray[10];
  myArray[0] = 42;
  myArray[1] = 56214;
  myArray[2] = 654;
  myArray[3] = 12;
  // some more
  myArray[9] = 5;

  printf("%i\n", myArray[2]);
  int sum = myArray[2] + myArray[3];
  printf("%i\n", sum);

  int anotherArray[5];
  // we can iterate over arrays
  for (int i = 0; i < 5; i++) {
    anotherArray[i] = i;
  }

  // lazy way of init
  int myLazyArray[] = {10,12,556,23,12,4646,0,2,1,4,33,22};

  // getting length of arrays
  int length = sizeof(myLazyArray) / sizeof(int);
  printf("Length of myLazyArray: %i\n", length);

  // use this length for iterating
  for (int k = 0; k < length; k++) {
    printf("%i ", myLazyArray[k]);;
  }
}
