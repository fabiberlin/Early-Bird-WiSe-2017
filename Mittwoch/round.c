#include <stdio.h>

void main() {

  float input;

  printf("Your input: ");
  scanf("%f", &input);

  int rounded = (int)(input + 0.5);

  printf("Rounded: %i\n", rounded);
}
