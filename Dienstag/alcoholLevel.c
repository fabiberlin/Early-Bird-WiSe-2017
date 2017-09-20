#include <stdio.h>

//https://www.kenn-dein-limit.de/alkohol/haeufige-fragen/was-ist-die-blutalkoholkonzentration/
//Gramm reiner Alkohol = Menge in ml * (Vol.-% / 100) x 0,8
//Körperflüssigkeit bei Männern (ca. 68%) und Frauen (ca. 55%)
//BAK (Promille) = Alkoholmenge in Gramm / (Körpergewicht in Kilogramm x Anteil Körperflüssigkeit)
void main() {

	printf("Alocohol Level Calculator!\n");

  const float bodyFluidMen = 0.68;
  const float bodyFluidWomen = 0.55;

  char gender;
  int ammountInML;  // in ml
  int alcoholByVolume;  // % Vol
  int bodyweight;  //in kg

  printf("How much did you drink? (in ml) ");
  scanf("%i", &ammountInML);

  printf("%% alcohol by volume? (in %%) ");
  scanf("%i", &alcoholByVolume);

  printf("How much do you weigh? (in kg) ");
  scanf("%i", &bodyweight);

  printf("Man or Woman? (m | w) ");
  scanf(" %c", &gender);

  float gramsOfPureAlcohol = ammountInML * (alcoholByVolume / 100.0) * 0.8;
  float bak;

  if (gender == 'm') {
    bak = gramsOfPureAlcohol / (bodyweight * bodyFluidMen);
  }else{
    bak = gramsOfPureAlcohol / (bodyweight * bodyFluidWomen);
  }

  printf("You have an alcohol level of %f per mille\n", bak);
}
