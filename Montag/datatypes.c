#include <stdio.h>

void main() {

   int var1 = 42;  // Ganzzahlen
   printf("%i\n", var1);

   float var2 = 1.34f;  // Gleitkommazahlen
   printf("%f\n", var2);

   char var3 = 'f';  // einzelne Zeichen
   printf("%c\n", var3);

   char var4[] = "hello";  // Zeichenketten (Strings)
   printf("%s\n", var4);

   int someNumber;  // lege Variable vom Typ int (Ganzzahl) an
   someNumber = 42;  // weise der Variablen den Wert 42 zu
   printf("%i\n", someNumber);

   int a = 10;
   int b = 20;
   //  wir haben a und b initialisiert und jeweils 10 und 20 zugewiesen
   //  wir können nun eine Variable initialisieren und die Summe aus a & b zuweisen
   int c = a + b;
   printf("%i\n", c);
}
