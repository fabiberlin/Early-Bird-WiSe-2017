#include <stdio.h>

int main(int argc, char const *argv[]) {

  int input = 4300; //Netto

  //Ausgabe "Netto: 4300"
  printf("Netto: %i\n", input);

  //Umrechnung
  float output = input * 1.19; //Brutto

  //Ausgabe "Brutto: 5117.00"
  printf("Brutto: %f\n", output);

  return 0;
}
