#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	printf("Lets dice!\n");
  srand(time(NULL));

  int numOfThrows = 1000;
  int distribution[13] = {0};

  printf("Wie oft soll gewuerfelt werden? ");
  scanf("%i", &numOfThrows);

  for (int i = 0; i < numOfThrows; i++) {
    int dice1 = 1 + rand() % 6;
    int dice2 = 1 + rand() % 6;
    int numOfPoints = dice1 + dice2;
    distribution[numOfPoints]++;
  }
  printf("Fertig - %i mal gewürfelt\n", numOfThrows);
  printf("Ergebnis: \n");

  for (int i = 2; i <= 12; i++) {
    float rate = distribution[i] / (float) numOfThrows;
    printf("%2i Augen: %6i mal - %.3f%%\n", i, distribution[i], rate);
  }

}
