# Mittwoch

## Agenda
- Casting
- Logische Operatoren
- Switch
- Zufallszahlen

## Hinweise

### Casting

Casting erlaubt es euch zwischen den verschiedenen Datentypen zu wechseln. Aber Achtung, dabei können Informationen verloren gehen. Z.B. von Float nach Int fällt der Teil hinter dem Komma einfach weg!
Explizites casting wird mit runden Klammern und dem Typen angegeben.
```c
int i = 4;
float f;
f = (float) i;
printf("i: %i\n", i);
printf("f: %f\n", f);
```

### Logische Operatoren

Diese dienen dazu, mehrere Bedingungen miteinander zu verknüfen. Die wichtigsten sind dabei das `&&` und `||` (UND und ODER).

Beim `&&` müssen beide Bedingungen wahr sein, sodass der Gesamtausdruck wahr wird. Ist einer von beiden falsch oder beide, so ist der Gesamtausdruck falsch.

Beim `||` reicht es aus, wenn einer der beiden Bedingungen wahr ist oder aber beide wahr sind, sodass der Gesamtausdruck wahr wird. Sind beide Bedingungen falsch so ist der Gesamtausdruck falsch.

Zusätzlich gibt es die Negation `!`. Dieser kann vor Bedingungen geschrieben werden, um diese von der Aussage umzudrehen. Aus wahr wird falsch und aus falsch wird wahr.

Es ist auch möglich mehr als nur zwei Bedingungen miteinander verknüpfen.

### Switch

Switches sind Kontrollstrukturen, ähnlich der bekannten `if` Verzweigungen. Wenn es viele Bedingungen (Fallunterscheidungen) gibt, so bieten sich statt der `if` Verzeigungen die `switch` Verzweigungen an. Sie haben folgende Struktur:

```c
switch (expression) {
  case value : statement;
}
```
Soll nur ein Case durchlaufen werden, so ist das `break` statement zwingend erforderlich.
Zusätlich kann ein `default` Block hinzugefügt werden, welcher als Fallbackmechanismus genutzt werden kann. Ein Beipiel zeigt die Unterscheidung von Benutzereingaben.
```c
char input;
scanf(" %c", &input);
switch (input) {
  case 'l': printf("Go Left!\n");
            break;
  case 'r': printf("Go Right\n");
            break;
  default: printf("Unknown Input\n");
}
```

### Zufallszahlen

Um eine Zufallszahl zu erzeugen, müssen folgende Bibliotheken importiert werden:
```c
#include <stdlib.h>
#include <time.h>
```
Die eigentliche Erzeugung im Porgramm sieht dabei wie folgt aus:
```c
srand(time(NULL)); //nur einmal ausführen!
int random = rand(); //das sind sehr große Zahlen
```

## Übungen

1. Verändert euren Calculator, sodass dieser statt den ganzen if-statements einen switch-case benutzt.

2. Baut ein Programm, dass ein Float einlesen kann und diesen mathematisch korrekt auf eine ganze Zahl rundet.

  ```bash
  Your input: 5.8
  Rounded: 6
  ```

3. Adaptiert die Rundung, sodass 2 stellen hinter dem Komma gerundet wird. (z.B. 4.687 --> 4.690)

  ```bash
  Your input: 4.687
  Rounded: 4.690000
  ```
  Was passiert bei einem Wert von __42.4242__?

4. Erstellt ein Programm, welches eine Zahl entgegennimmt und den entsprechenden Buchstaben im Alphabet zurückgibt. [Hinweis](https://de.wikipedia.org/wiki/American_Standard_Code_for_Information_Interchange)

  ```bash
  Number of Letter? 12
  L
  ```

5. Kopf oder Zahl. Benutzt die Zufallszahlen um ein Programm zu schreiben, welches virtuell Kopf oder Zahl wirft.

6. Schreibt ein Programm, dass euch bei der Ausführung eine Zufallszahl zwischen 1 und 10 liefert.
