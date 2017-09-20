#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  
  srand(time(NULL));

  int random = rand() % 2;

  if (random == 0) {
    printf("Head\n");
  } else {
    printf("Tail\n");
  }
}
