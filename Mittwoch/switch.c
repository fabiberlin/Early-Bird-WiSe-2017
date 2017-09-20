#include <stdio.h>

void main() {

  char input;
  scanf(" %c", &input);
  switch (input) {
    case 'l': printf("Go Left!\n");
              break;
    case 'r': printf("Go Right\n");
              break;
    default: printf("Unknown Input\n");
  }
}
