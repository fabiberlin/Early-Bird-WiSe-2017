## Weitere Aufgaben

Diese Aufgaben nutzen alles was wir in der Woche lernen werden. Sie sind teilweise sehr anspruchsvoll und sind eher für die gelangweilten Leute gedacht.

Ihr könnt aber auch nach Ende des Kurses die Aufgaben bearbeiten. Beispielimplementationen werden folgen.

### Größter gemeinsamer Teiler
Hinweis: [Wikipedia](https://de.wikipedia.org/wiki/Gr%C3%B6%C3%9Fter_gemeinsamer_Teiler)

```bash
Erste Zahl: 16
Zweite Zahl: 24
Der ggT ist 8
```

### Euklidischer Abstand
Der Abstand zwischen 2 beliebigen Punkten im 2-dimensionalen Raum (auch Satz des Pythagoras). Hinweis: [Wikipedia](https://de.wikipedia.org/wiki/Euklidischer_Abstand)
```bash
Geben Sie den ersten punkt ein:
X-Achse: 1
Y-Achse: 1
Geben Sie den zweiten punkt ein:
X-Achse: 2
Y-Achse: 2
Der Abstand zwischen den zwei punkten betraegt:
1.414214
```

### Hangman
Ein 2 Spieler Game. Zunächst kann ein Spieler ein zu erratendes Wort eingeben. Danach wird die Konsole gelöscht und der zweite Spieler kann durch Eingaben versuchen das Wort zu erraten. Zusätzlich kann gerne ein Zähler mit eingebaut werden, welcher die Anzahl der Versuche mitzählt und ggf. das Spiel irgendwann abrricht.

```bash
Please enter a Word: hello

///////// Cleared Screen /////////

abcdefghijklmnopqrstuvwxyz
-----
Enter a Letter: l

///////// Cleared Screen /////////

abcdefghijk_mnopqrstuvwxyz
--ll-
Enter a Letter:

///////// Cleared Screen /////////
... usw.
```

### Schiffe versenken
Ein Single Player Game. Es gibt ein Spielfeld mit einer gewissen Dimension. Der Computer soll beim Start des Programms zufällig Schiffe darauf platzieren (Vertikale und Horizontale Schiffe mit unterschiedlicher Länge). Die Platzierung ist für den Spieler natürlich nicht sichtbar. Dieser muss nun durch Eingeben von Koordinaten ein Tipp abgeben, ob dort ein Schiff ist. Je nachdem, ob dort ein Schiff war oder nicht, wird der Spieler informiert. Das Spielfeld kann in Form einer Tabelle visualisiert werden, sodas der Spieler weiß, wo er bereits Tipps abgegeben hat.

```bash
Where you wanna shoot?
X: 1
Y: 4

///////// Cleared Screen /////////

Damm, there wasnt a ship. (Round 1)
     0  1  2  3  4  5  6

0                        
1                        
2                        
3                        
4       #                
5                        
6                        
Where you wanna shoot?
X: 2
Y: 5

///////// Cleared Screen /////////
... usw.
```

### Schere Stein Papier
Ein 2 Spieler Game. Natürlich muss auch hier zwischenzeitlich die Konsole geleert werden, sodass die Spieler nicht gegenseitig ihre Eingaben sehen.
```bash
Player 1, enter (r)ock, (p)aper or (s)cissors: p

///////// Cleared Screen /////////

Player 2, enter (r)ock, (p)aper or (s)cissors: s

///////// Cleared Screen /////////

Paper
vs
Scissors

Player 2 won that round!

Points:
Player1: 0
Player2: 1

Press a key to continue!

///////// Cleared Screen /////////
... usw.
```
