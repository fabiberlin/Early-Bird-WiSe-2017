# Dienstag

## Agenda
- IO
- Kontrollstrukturen

## Hinweise

### IO

Wir können bereits Variablen auf der Konsole ausgeben mittels der `printf()` Funktion. Das Pendant `scanf()` wird benutzt um von der Konsole einzulesen. Dabei wird der gelesene Wert in eine Variable gespeichert. Dies kann genutzt werden, um Benutzereingaben zu bekommen.
```c
int nameOfVariable;
scanf("%i", &nameOfVariable);
```
Wichtig hier ist der `&` Operator vor dem Variablennamen (dieser gibt die Speicheradresse an). Wollt ihr ein `char` einlesen, so kann es dazu kommen, dass die Eingabe einfach übersrungen wird (Näheres gerne im Tutorium). Generell gilt: ein Leerzeichen vor dem Prozent löst das Problem in den meisten Fällen (`scanf(" %c", &nameOfVariable);`).


### Kontrollstrukturen

Kontrollstrukturen dienen dazu, den Programmfluß an bestimmten Stellen zu steuern. Wir können dies mittels des `if` Schlüsselworts einleiten. Gefolgt von einer Bedingungen (z.B. `i < 10`) wird der folgenede Codeabschnitt (in gescheiften Klammern) nur ausgeführt, wenn die Bedingung war ist. Ein Beispiel für die Syntax sieht wie folgt aus:
```c
int i = 7;

if (i < 10) {
  printf("Variable i is smaller than 10\n");
}
```
Diese einfache Variante dient dazu, bestimmte Codeabschnitte auszuführen, wenn eine Bedingung erfüllt ist. Daneben gibt es auch das `if else` Konstrukt. Hierbei wird entweder der Code aus dem if oder aus dem else Block ausgeführt. Frei nach dem Motto:  "Falls etwas wahr ist, mache das was hier steht, ansonsten mache das was dadrunter steht"
```c
if (condition) {
  // code
}else{
  // code
}
```
Man kann ach Verzeigungen ineinander verschachteln. Zudem kann das `else if` statement für weitere Verzeigungsmöglichkeiten genutzt werden. Hier ist es auch sinnvoll den Code je nach Tiefe der Verzweigung einzurücken. Atom hilft euch bereits dabei.
```c
if (condition) {
  // code
} else if (condition) {
  // code
  if (condition) {
    // code
  } else {
    // code
  }
}
```
Vergleichsoperatoren helfen euch, Bedingungen (Conditions) zu erstellen. Sie ähneln dabei der Aussagen aus der Mathematik. Hier ein paar wichtige:
```c
a < b   // kleiner
a <= b  // kleiner gleich
a > b   // größer
a >= b  // größer gleich
a == b  // gleich
a != b  // ungleich
```

## Übungen

1. __I/O__ - Baut ein kleines Programm, was Zahlen einliest und wieder auf die Kommandozeile ausgibt.
  ```bash
  Please enter a number: 46
  You entered the number 46
  ```

2. Verändert eure bisherige Programme, sodass sie auf Benutzereingaben reagieren, statt auf fest eingebaute Variablen.
z.B. Mehrwertsteuerrechner, Fahrenheitrechner..

3. __Odd / Even Number__ - Lest eine Zahl von der Konsole ein und bestimmt ob die Zahl gerade oder ungerade ist. (Kann hier der Modulo Operator helfen? `15 % 4` ist 3)
  ```bash
  Please enter a number: 42
  42 is an even number
  ```

4. __Taschenrechner__ - Ein kleiner interaktiver Taschenrechner
  ```bash
  Welcome to this simple Calculator!
  Enter your first number: 23
  Which calculation (+ - * /): *
  Enter your second number: 34
  Result: 782
  ```

  Was passiert bei __3 / 2__ und was bei __999999 * 999999__ ?

5. __Alkohollevel Rechner__ - Ihr findet hier eine Formel zur Berechnung:  [kenn-dein-limit.de](https://www.kenn-dein-limit.de/alkohol/haeufige-fragen/was-ist-die-blutalkoholkonzentration/) Ihr könnt die Anwendung auch noch erweitern und ausrechenen wie lange man braucht, um wieder nüchtern zu werden, oder aber eine Empfehlung abgeben, ob es gerade gesund ist noch Auto zufahren.
  ```bash
  Alocohol Level Calculator!
  How much did you drink? (in ml) 1000
  % alcohol by volume? (in %) 5
  How much do you weigh? (in kg) 70
  Man or Woman? (m | w) m
  You have an alcohol level of 0.840336 per mille
  ```
