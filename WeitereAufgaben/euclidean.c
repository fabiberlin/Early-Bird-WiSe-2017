#include <stdio.h>
#include <math.h>

int main (){

  int Px1,Py1,Px2,Py2;

  printf("Geben Sie den ersten punkt ein:\n");
  printf("X-Achse:\n");
  scanf("%i",&Px1);

  printf("Y-Achse:\n");
  scanf("%i",&Py1);


  printf("Geben Sie den zweiten punkt ein:\n");
  printf("X-Achse:\n");
  scanf("%i",&Px2);


  printf("Y-Achse:\n");
  scanf("%i",&Py2);

  printf("Der Abstand zwischen den zwei punkten betraegt:\n");

  int a,b;
  float c;
  a = Px2 - Px1;
  b = Py2 - Py1;
  c = (a*a)+(b*b); //Satz des Pythagoras
  c = sqrt(c);//Wurzel ziehen

  printf("%f\n", c);
  return 0;
}
