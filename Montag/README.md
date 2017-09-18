# Montag

## Agenda

- Modalitäten
- Bash
- Wozu Programmiersprachen
- Wie wird aus Code ein Programm
- Hello World Anwendung
- Programmablauf
- Syntax
  - Variablen
  - Wertzuweisungen
  - Berechnungen
  - Statements
- Links und Bücher
- gcc unter Windows / OSX

## Hinweise

### Bash

- Shortcut zum Öffnen des Terminals: __Strg + Alt + T__
- Anzeigen des aktuellen Pfads: __pwd__
- Inhalt des aktuelles Verzeichnis: __ls__ oder __ls -l__
- In Verzeichnis _"xyz"_ wecheseln: __cd xyz__
- In übergeordnetes Verzeichnis wechseln: __cd ..__
- Ins Home Verzeichnis wechseln: __cd__
- Programme abbrechen: __Strg + Z__
- GCC Compiler auf Datei _"hello.c"_ anwenden: __gcc hello.c -o hello__
- Ausführen des Programms: __./hello__

### C Basics

Ein Hello World Programm sieht beispielhaft so aus:

```c
// hinzufügen von Libraries
#include <stdio.h>

// main Methode - Startpunkt des Programms
int main() {

  // hier können wir Anweisungen schreiben

  // Ausgabe von "Hello, World" auf der Konsole
   printf("Hello, World!\n");

   // Rückgabe des Status 0 - Programm wird beendet
   return 0;
}
```

Eine verkürzte Version kann auch wie folgt aussehen:

```c
#include <stdio.h>

void main() {
   printf("Hello, World!\n");
}
```
Es gibt verschiede Datentypen in C. Sie geben an, wie der Inhalt der Variable aussieht. Jede Variable wird zusammen mit dem Datentypen initialisiert.

```c
int var1 = 42;  // Ganzzahlen
printf("%i\n", var1);

float var2 = 1.34f;  // Gleitkommazahlen
printf("%f\n", var2);

char var3 = 'f';  // einzelne Zeichen
printf("%c\n", var3);

char var4[] = "hello";  // Zeichenketten (Strings)
printf("%s\n", var4);
```

Die _printf()_ Methode sieht etwas umständlich aus. _%i_, _%f_, _%c_ sind Platzhalter für die jeweiligen Variablen (der Buchstabe gibt an, von welchem Typ sie sind).
_\n_ ist ein spezielles Symbol was zum Zeilenumbruch in der Konsole führt.

Man kann auch Variablen erst deklarieren und dann einen Wert zuweisen. Eine Zuweisung erfolgt mittels des __=__ Opperators.

```c
int someNumber;  // lege Variable vom Typ int (Ganzzahl) an
someNumber = 42;  // weise der Variablen den Wert 42 zu
printf("%i\n", someNumber);
```

Natürlich kann man auch Rechnen. Hier gibt es die Standardopperatoren wie aus der Mathematik bekannt ( __+ - / *__ ). Wichtig ist hier nur, dass das __=__ sich nicht verhält wie in der Mathematik. Hier hat es die Bedeutung der Zuweisung und nicht der Gleichheit.
```c
int a = 10;
int b = 20;
//  wir haben a und b initialisiert und jeweils 10 und 20 zugewiesen
//  wir können nun eine Variable initialisieren und die Summe aus a & b zuweisen
int c = a + b;
printf("%i\n", c);
```

## Übungen

Wir werden noch nicht die Eingabe von Werten benutzen (es sei denn ihr könnt es schon), daher könnt ihr einfach am Anfang eures Programms eine Variable initialisieren mit einem bestimmten Wert (z.B. 42 oder 4300).

1. __Hello World__ - Schreibt ein Hello World Programm, dass euch mit Namen begrüßt.
  ```bash
  Hello Fabian!
  What a wonderful day..
  ```

2. __Fahrenheit__ - Celsius zu Fahrenheit Rechner ([Formel](https://de.wikipedia.org/wiki/Grad_Fahrenheit#Temperaturumrechnung)). Ein beliebiger Wert in Celsius soll nach Fahrenheit konvertiert werden.
  ```bash
  Celsius: 42
  Fahrenheit :107.599998
  ```

3. __Umsatzsteuerrechner__ - Das Programm soll einen von euch definierten Nettovetrag in einen Bruttobetrag umrechnen. Derzeit liegt die Umsatzsteuer bei 19%.
  ```bash
  Netto: 4300
  Brutto: 5117.000000
  ```

4. __Shop__ - Ein kleines Kassensystem. Ihr habt einen Shop, wo Schrauben für 10 Cent, Muttern für 4 Cent und Unterlegscheiben für 1 Cent anbeboten werden. Das Tool soll den Benutzer fragen, wieviel er von jedem Artikel wünscht. Am Ende soll der Gesamtpreis ausgerechnet werden. Zudem kann eine Benachrichtigung eingebaut werden, wenn mehr Schrauben als Muttern gekauft wurden.
  ```bash
  Anzahl Schrauben: 46
  Anzahl Muttern: 32
  Anzahl Unterlegscheiben: 124

  Kontrollieren Sie Ihre Bestellung!

  Gesamtbetrag: 712
  ```

## Links zu Büchern/Webseiten

  - http://www.video2brain.com/ (kostenlos mit HTW Zugang - siehe dazu auch Hinweise unter  http://bibliothek.htw-berlin.de/weitere-dienste/video2brain-lyndacom/)
  - http://openbook.rheinwerk-verlag.de/c_von_a_bis_z/
  - http://www.learn-c.org/de/
  - https://de.udacity.com/
  - https://www.codecademy.com/
  - https://www.codeschool.com/
  - Q&A http://stackoverflow.com/

## gcc unter Windows
Die [Freitagsrunde](https://wiki.freitagsrunde.org/Hauptseite) der TU Berlin hat dazu eine Installationsanweisung.
`https://wiki.freitagsrunde.org/C_(GCC_unter_Windows)`

## gcc unter OSX
Ihr könnt einfach `clang` statt `gcc` in der Konsole eingeben
