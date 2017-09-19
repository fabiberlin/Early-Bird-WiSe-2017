# Donnerstag

## Agenda
- Schleifen

## Hinweise

### Schleifen

Schleifen helfen euch, bestimmte Codeabschnitte mehrmals auszuführen. Es gibt verschiede Arten von Schleifen, welche jedoch meist ineinander überführt werden können. Die einfachste form ist die reine `while` Schleife.
```c
int a = 0;
while (a < 10) {
  printf("%i ",a);
  a = a + 1;
}
```
Hier wird eine Variable a mit dem Wert 0 angelegt. Es folgt die Schleife, welche solange ausgeführt wird, bis a echt kleiner als 10 ist. Innerhalb der Schleife wird lediglich die Variabele ausgegeben und um 1 jeweils erhöht.
Die Standardsyntax für while Schleifen sieht dabei wie folgt aus:
```c
while (condition) {
  // code
}
```
Schleifen brauchen ähnlich wie Verzweigungen eine Bedingung (Condition). Diese muss wahr oder falsch sein. Soll die Schleife ausgeführt werden, so muss die Bedingung wahr sein. Der eigentliche Rumpf der Schleife (in geschweiften Klammern) wird dann solange ausgeführt, bis die Bedingung nicht mehr erfüllt ist (falsch ist). Dies kann auch zu __Endlosschleifen__ führen, was unbedingt vermieden werden sollte! Ihr müsst sicherstellen, dass die Bedingung irgendwann einmal auf falsch springt, damit die Schleife verlassen wird. Solltet ihr jedoch mal eine erzeugt und ausgeführt haben, könnt ihr mit __Strg & Z__ das Programm abbrechen.

Daneben gibt es `do while` Schleifen. Diese führen mindestens einmal den eigentlichen code aus dem Schleifenbody (der Teil in geschweiften Klammern) aus und überprüfen danach erst die Bedingung.
```c
int b = 0;
do {
  printf("%i ",b++);
} while (b < 10);
```

Bei Programmieren ist die `for` Schleife für einfache Iterationen über eine Laufvariable beliebt. Sie verkürzt damit den Schreibaufwand gegenüber der traditionellen while Schleife. Sie besteht im Schleifenkopf dabei aus 3 Teilen, welche durch ein Semikolon getrennt sind.
1. die Initialisierung der Laufvariablen
2. die Bedingung für die Ausführung der Schleife
3. die Fortsetzung - Postinkremment (das was am Ende des Schleifenbodys ausgeführt werden soll)

```c
for (int i = 0; i <= 10; i++) {
  printf("%i ", i);
}
```

Zusätzlich gibt es noch 2 weitere Schlüsselwörter um Schleifen attraktiver zu machen. Das `break` statement wird dazu verwendet, um aus Schleifen auszubrechen. Das heißt, wird dieses Statement erreicht, so werden nachfolgende statements der Schleife ignoriert und zusätzlich wird die Schleife auch verlassen. Eine erneute Prüfung der Schleifenbedinung erfolgt nicht.

Das `continue` statement wird dazu verwendet, folgende statements der Schleife zu überspringen und die Schleife von oben "neu zu starten".


## Übungen

1. __Zahlenfolgen__ - Schreibt ein Programm, welches euch folgende Zahlen mittels Schleifen ausgibt. (Prinzipiell können alle Aufgaben mit einer einfach while Schleife und ohne Verzweigungen implementiert werden.)
  - Aufsteigend von 0 bis 10
  - Aufsteigend von 0 bis 16 in zweier Schritten
  - Absteigend von 19 bis 1 in zweier Schritten
  - Aufsteigend alle Quadratzahlen von 0 bis 14
  - Aufsteigend von 1 bis 128 mit Verdopplung des Vorgängers

  ```bash
  0 1 2 3 4 5 6 7 8 9 10
  0 2 4 6 8 10 12 14 16
  19 17 15 13 11 9 7 5 3 1
  0 1 4 9 16 25 36 49 64 81 100 121 144 169 196
  1 2 4 8 16 32 64 128
  ```

2. __Errate die Zahl!__ - Der Computer generiert eine Zufallszahl und der Benutzer muss diese erraten. Dabei werden Hinweise gegeben, ob die aktuelle Zahl größer oder kleiner als die zu erratene Zahl ist.

  ```bash
  Bitte erraten Sie eine Zufallszahl zwischen 1 und 100.
  Ihr 1. Versuch: 50
    die gesuchte Zahl ist groesser!
  Ihr 2. Versuch: 75
    die gesuchte Zahl ist kleiner!
  Ihr 3. Versuch: 62
    die gesuchte Zahl ist groesser!
  Ihr 4. Versuch: 69
    die gesuchte Zahl ist groesser!
  Ihr 5. Versuch: 72
  Glueckwunsch! Die Zahl war 72.
  ```

3. __Zinsrechner__ - Errechnet mittels Zinseszins den Zeitraum, welcher notwendig ist, das Vermögen bis zum gewünschten Betrag zu erreichen. Ihr könnt mit einen festen Zinssatz pro Jahr rechnen (hier 3%). _Hinweis_: Statt einer komplizierten Formel geht auch eine einfache Schleife, welche die Zinsen zum Betrag jedes Jahr hinzufügt.

  ```bash
  How much money do you have on your account? 1000
  How much money do you want to have? 2300
  No big deal - you just have to wait 29 years.
  ```

4. __Fibonacci__ - Gebt die Fibonacci Folge auf der Konsole aus (z.B. 1 bis 100). Eine Zahl ist die Summe der 2 vorherigen Zahlen. Die ersten beiden Zahlen können dabei vorgegeben werden. [Wikipedia](https://de.wikipedia.org/wiki/Fibonacci-Folge)

  ```bash
  1 1 2 3 5 8 13 21 34 55 89
  ```

5. __Fakultät__ - Berechnet die Fakultät einer beliebigen Zahl. Z.B. 3! = 1 \* 2 \* 3 = 6 oder 6! = 1 \* 2 \* 3 \* 4 \* 5 \* 6 = 720. [Wikipedia](https://de.wikipedia.org/wiki/Fakultät_%28Mathematik%29)

  ```bash
  Bitte Fakultaet eingeben: 8
  40320
  ```
  Was ist __17!__ ?

6. __Primzahlen__ - Gebt alle Primzahlen von 3 bis 100 auf der Konsole aus. Primzahlen sind nur duch sich selbst und 1 teilbar (restfrei).

  ```bash
  3 ist eine Primzahl.
  5 ist eine Primzahl.
  7 ist eine Primzahl.
  11 ist eine Primzahl.
  13 ist eine Primzahl.
  17 ist eine Primzahl.
  ...
  ```
