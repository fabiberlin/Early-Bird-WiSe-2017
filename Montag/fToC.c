#include <stdio.h>

// Fahrenheit to Celsius Calculator
int main(int argc, char const *argv[]) {

  int input = 42; //Celsius

  //Ausgabe "Celsius: 42"
  printf("Celsius: %i\n", input);

  //Umrechnung nach Fahrenheit
  float output = input * 1.8 + 32;

  //Ausgabe "Fahrenheit : 107"
  printf("Fahrenheit :%f\n", output);

  return 0;
}
