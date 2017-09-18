#include <stdio.h>

int main() {

  int cscrews,cnuts,cwashers;
  int screw_price = 10;
  int nut_price = 4;
  int washer_price = 1;
  int price;

  printf("Anzahl Schrauben: ");
  scanf( "%i", &cscrews );
  printf("Anzahl Muttern: ");
  scanf( "%i", &cnuts );
  printf("Anzahl Unterlegscheiben: ");
  scanf( "%i", &cwashers );

  price =  screw_price * cscrews + nut_price * cnuts + washer_price * cwashers;

  if (cscrews > cnuts){
    printf("\nKontrollieren Sie Ihre Bestellung!\n");
  }
  
  printf("\nGesamtbetrag: %i\n",price);

  return 0;

}
