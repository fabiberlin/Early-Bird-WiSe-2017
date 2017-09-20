#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  srand(time(NULL));
  int random = rand();
  printf("%i\n", random);
}
