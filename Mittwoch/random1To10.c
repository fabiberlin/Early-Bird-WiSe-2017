#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

  srand(time(NULL));

  int random = rand() % 10 + 1;
  printf("%i\n", random);

  random = rand() % 10 + 1;
  printf("%i\n", random);

  random = rand() % 10 + 1;
  printf("%i\n", random);

  random = rand() % 10 + 1;
  printf("%i\n", random);

  random = rand() % 10 + 1;
  printf("%i\n", random);

  random = rand() % 10 + 1;
  printf("%i\n", random);
}
