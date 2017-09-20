#include <stdio.h>

void main() {

  float input;

  printf("Your input: ");
  scanf("%f", &input);

  float shifted = 100 * input;
  //printf("Shifted: %f\n", shifted);

  int shiftedRounded = (int)(shifted + 0.5);
  //printf("ShiftedRounded: %i\n", shiftedRounded);

  float shiftedBack = shiftedRounded / 100.0;
  printf("Rounded: %f\n", shiftedBack);
}
