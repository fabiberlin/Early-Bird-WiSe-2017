#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getARandomNumber1to10(){
  int randomNumber = (rand() % 10) + 1;
  return randomNumber;
}

// "from" and "to" are inclusive
int getARandomNumber (int from, int to){
  int range = to - from + 1;
  int randomNumber = (rand() % range) + from;
  return randomNumber;
}

void main() {
  srand(time(NULL));

  for (int i = 0; i < 30; i++) {
    printf("%i ", getARandomNumber1to10());
  }

  printf("\n");

  for (int i = 0; i < 30; i++) {
    printf("%i ", getARandomNumber(3, 7));
  }

  printf("\n");
}
