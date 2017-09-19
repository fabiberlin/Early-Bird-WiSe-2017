# Freitag

## Agenda
- Arrays
- Funktionen
- Scopes

## Hinweise

### Arrays

Stellt euch vor ihr habt eine große Menge an unterschiedlichen Werten des gleichen Formats (Typs), welche ihr speichern wollt. Dafür jedesmal eine Variable anzulegen und dieser einen Wert zuweisen ist recht umstämdlich. Arrays können euch hier weiterhelfen. Dies ist eine Datenstruktur, in der ihr mehrere unterschiedliche Werte speichern könnt.

Die Deklaration eines Arrays erfolgt mittels eckigen Klammern. In den Klammern wird die Größe des Arrays angegeben.
```c
int myArray[10];
```
Dies erzeugt eine Variable mit dem Namen `i`, in der wir Platz haben. `10` Werte vom Typ `int` zu speichern. Um auf die Werte an den unterschiedlichen Stellen des Arrays zuzugreifen, wird ein Index benötigt. Dieser Index ist 0-basiert. Das heit der Index 0 zeigt auf das erste Element im Array und der Index 9 zeigt auf das letzte Element (bei einem Array der Länge 10). Zuweisungen sehen dabei wie folgt aus:
```c
myArray[0] = 42;
myArray[1] = 56214;
myArray[2] = 654;
...
myArray[9] = 5;
```
Der Zugriff auf Elemente des Arrays erfolgt genauso:
```c
printf("%i\n", myArray[2]);
int sum = myArray[2] + myArray[3];
```
Da wir mittels Indizes auf die Elemente in Arrays zugreifen bieten sich Schleifen förmlich an! Hier werden alle Elemente des Arrays mit einem Wert versehen. Im Codebeispiel wird dem ersten Element eine 0 zugewiesen, dem zweiten eine 1 usw.
```c
int anotherArray[5];
// we can iterate over arrays
for (int i = 0; i < 5; i++) {
  anotherArray[i] = i;
}
```
Arrays können auch sofort mit Werten initialisiert werden. Eine Angabe der Länge des Arrays ist dabei nicht notwendig!
```c
int myLazyArray[] = {10,12,556,23,12,4646,0,2,1,4,33,22};
```
Möchte man im nachhinein die Länge des Arrays bestimmen, eigenet sich `sizeof`.
```c
int length = sizeof(myLazyArray) / sizeof(int);
printf("Length of myLazyArray: %i\n", length);
```
Diese Länge kann dann auch innerhalb von Schleifen verwendet werden:
```c
for (int k = 0; k < length; k++) {
  printf("%i ", myLazyArray[k]);;
}
```

### Funktionen

Wir haben Funktionen (oder auch Methoden gennant) bereits kennengelernt. Zum Beispiel ist `main()` eine Funktion oder aber als wir uns Zufallszahlen generiert haben mittels `rand()`.

Funktionen kann man sich so vorstellen, dass sie Code zusammenfassen und an anderer Stelle bereitstellen. Sie bieten Funktionalitäten an wie das Erstellen von Zufallszahlen. Der Anwender braucht sich keine Gedanken machen, wie das an sich geschieht. Es reicht die bereits vorhandene Funktionalität in Form einer Funktion aufzurufen.

Bevor wir anfangen Funktionen aufzurufen, werden wir uns anschauen wie man Funktionen selber schreiben kann. Dabei müssen Funktionen folgenden Aufbau haben:
```
Rückgabetyp Methodenname (Parametertyp Parametername){
  Anweisung;
  ...
  Anweisung;
  return Wert //nur nötig, wenn die Funktion was zurückliefert
}
```
Die Übergabe von Parametern ist optional. Die `return` Anweisung muss nur erfolgen, wenn die Funktion auch was zurückliefert.

Die einfachste Form einer Funktion ist daher parameterlos und liefert auch nix an den Aufrufenden zurück. Wenn die Funktion nicht ruückliefert so schreiben wir als Rückgabetyp ein `void`. Die Parameter in den runden Klammern können wir weglassen (parameterlos).
```c
void sayWelcomeToMe() {
  printf("Hello Fabian,\n");
  printf("what a wonderful day!\n");
}
```
Diese Funktion macht also nix weiter als zwei Print Befehle absetzen, in denen ich begrüßt werde.
Möchten wir diese Funktion aufrufen, so müssen wir nur folgende Anweisung schreiben:
```c
sayWelcomeToMe();
```

Es wäre aber besser, wenn die Funktion auch andere Leute begrüßen könnte. Wir können nun ein Parameter hinzufügen, welcher den Namen der Person darstellen soll. Dieser ist vom Typ eine Zeichenkette (String) und wird einfach in die runden Klammern geschrieben. Damit hat der Body der Funktion (das in den geschweiften Klammern) eine weitere Information und kann diese in der Implementierung nutzen.
```c
void sayWelcomeTo(char name[]) {
  printf("Hello %s,\n", name);
  printf("what a wonderful day!\n");
}
```
Möchten wir nun diese Funktion nutzen, so müssen wir auch beim Aufruf den Parameter mit übergeben.
```c
sayWelcomeTo("Peter");
sayWelcomeTo("Karl");
```

Wir können auch mehr als nur ein Parameter übergeben. Diese werden sowohl bei der Methodensignatur als auch beim Aufruf mit enfachen `,` angegeben.
```c
void sayWelcomeToWithMood(char name[], char mood[]) {
  printf("Hello %s,\n", name);
  printf("what a %s day!\n", mood);
}
```
Der Aufruf:
```c
sayWelcomeToWithMood("Karl", "wonderful");
sayWelcomeToWithMood("Peter", "bad");
```

Die bisherigen Methoden sind schon super, allerdings arbeiten sie nur einseitig. Das heißt, sie geben nur was auf der Konsole aus. Sie haben noch keine Rückgabe an Information, welche den Aufrufenden nutzen könnte (In dem Bsp. mit der Begrüßung ist das auch nicht nötig).

Soll eine Funktion dem Aufrufenden etwas zurückgeben, so muss ein Rückgabetype angegeben werden (also das `void` ändern). Als Beispiel könnte es ein Funktion geben, welche immer die Zahl 42 zurückgibt. Daher wird sie in der Signatur auch ein `int` als Rückgabetyp definieren. Die eigentliche Rückgabe erfolgt dann im Methodenbody mittels des `return` statements.
```c
int answerToTheUltimateQuestionOfLifeTheUniverseAndEverything(){
  return 42;
}
```
Der Aufruf kann wie wie im ersten Beispiel erfolgen:
```c
answerToTheUltimateQuestionOfLifeTheUniverseAndEverything();
```
Allerdings macht dies nicht wirklich da wir die zurückgegebene Antwort gar nicht auffangen (die Funktion wird denoch ausgeführt).
Richtig wäre es so:
```c
int answer = answerToTheUltimateQuestionOfLifeTheUniverseAndEverything();
printf("%i\n", answer);
```
Man beachte die Schreibweise von Funktionen. Je nach Programmiersprache gibt es verschiedene Konventionen. Am meisten druchgesetzt hat sich das [CamelCase](https://en.wikipedia.org/wiki/Camel_case).
Diese Art der Funktion ist auch die, welche wir bereits nutzen, um uns Zufallszahlen zu generieren!
```c
int random = rand();
```
Nun können wir das bereits Gelernte auch kombinieren. Das heißt, wir benutzen sowohl Parameter als auch Rückgabetyp. Hier eine kleine Funktion, welche eine beliebige ganze Zahl entgegennimmt (Parameter), diese verdoppelt und wieder zurückgibt.
```c
int twotimes(int aNumber) {
  int result = 2 * aNumber;
  return result;
}
```
Der Aufruf sieht dabei wie folgt aus:
```c
int var = twotimes(23);
printf("%i\n", var);
```

### Scopes

Scopes definieren unteranderem die Gültigkeitsdauer von Variablen. Schaut euch das Beispiel in __scopes.c__ dazu an.

## Übungen

1. __Array I/O__ - Schreibt ein kleines Programm was ein Array anlegt, dieses mit Werten befüllt und anschließend wieder auf der Konsole ausgibt.

  ```bash
  Simple I/O using Arrays
  Length of Array? 4
  Your Value: 541
  Your Value: 236
  Your Value: 14
  Your Value: 2
  Thanks for your input, you inserted:
  541
  236
  14
  2
  ```

2. __Average__ - Errechnet den Durchschnitt von Werten eines Arrays. Ihr könnt zum Anlegen und Füllen des Arrays den Code aus der ersten Aufgabe verwenden. Der Durchschnitt berechnet sich aus der Summe aller Werte geteilt durch die Anzahl der Werte.
Zusatz: Es gibt auch andere statistische Merkmale wie __Minimum__, __Maximum__ oder __Median__. Ergänzt euer Programm dahingehend, dass diese Werte ebenfalls ermittelt werden.

  ```bash
  Average calculator
  How many elements? 3
  Your Value: 6
  Your Value: 5
  Your Value: 3
  Thanks for your input.
  The average value is: 4.666667
  ```

3. __Let's dice!__ Stellt euch vor ihr habt 2 Würfel und wettet darauf, eine bestimmte Augenzahl zu würfeln. Man kann errechnen, dass ihr am besten auf die 7 wettet. Man kann aber auch ein Computer dazu nutzen, eine heutistisches Programm zu entwickeln und auszuführen. Bei der Heuristik wird einfach sehr sehr oft gewürfelt (für den Menschen eher langweilig) und am Ende festgestellt, welche Zahl am häufigsten vorkam. Dabei können wir das Wüfeln mittels Zufallszahlen ganz gut simulieren.
Die Frage lautet also, welche Augenzahl zwischen 2 und 12 kommt am häufigsten vor?

  ```bash
  Lets dice!
  Wie oft soll gewuerfelt werden? 10000
  Fertig - 10000 mal gewürfelt
  Ergebnis:
   2 Augen:    282 mal - 0.028%
   3 Augen:    569 mal - 0.057%
  ...
  ...
  11 Augen:    555 mal - 0.056%
  12 Augen:    267 mal - 0.027%
  ```

4. Erstellt eine Funktion die eine Zufallszahl zwischen 1 und 10 zurückliefert.

5. Erstellt eine Funktion die eine Zufallszahl zwischen 2 beliebigen Grenzen zurückliefert.

6. Schaut in euren Programmen nach, wo Code in Funktionen ausgelagert werden kann.

7. Schaut euch die Aufgaben im Ordner [Weitere Aufgaben](https://github.com/fabiberlin/Early-Bird-SoSe-2017-II/tree/master/WeitereAufgaben) an.
