#include <stdio.h>

int main(){

  int x, i;
  
  for (x = 3; x <= 100; x++){ //für alle Zahlen von 3 bis 100
    for (i = 2; i < x; i++){  //für alle potenzielle Teiler (2 bis Zahl)
      if (x%i == 0) {          //Schaue ob Zahl durch Teiler RestFrei ist
        break;
      }
    }
    if (i == x) {
      printf("%i ist eine Primzahl.\n", x);
    }
  }
  return 0;
}
