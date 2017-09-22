#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float distance(float x, float y){
  return (x*x + y*y);
}

void main() {
	int trials = 1000;
  printf("How many trials?\n");
  scanf("%i", &trials);
  int hits = 0;
  srand(time(NULL));
  for (int i = 0; i < trials; i++) {
    float x = rand() / (float) (RAND_MAX);
    float y = rand() / (float) (RAND_MAX);
    if (distance(x,y) <= 1) {
      hits++;
    }
  }
  float pi = (4 * hits) / (float) trials;
  printf("Pi is %f\n", pi);
}
