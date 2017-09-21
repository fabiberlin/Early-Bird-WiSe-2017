#include <stdio.h>

/*
declaring a function

Rückgabetyp Methodenname (Parametertyp Parametername){
  Anweisung;
  ...
  Anweisung;
  return Wert //nur nötig, wenn die Funktion was zurückliefert
}
*/

void sayWelcomeToMe() {
  printf("Hello Fabian,\n");
  printf("what a wonderful day!\n");
}

void sayWelcomeTo(char name[]) {
  printf("Hello %s,\n", name);
  printf("what a wonderful day!\n");
}

void sayWelcomeToWithMood(char name[], char mood[]) {
  printf("Hello %s,\n", name);
  printf("what a %s day!\n", mood);
}

int answerToTheUltimateQuestionOfLifeTheUniverseAndEverything(){
  return 42;
}

int twotimes(int aNumber) {
  int result = 2 * aNumber;
  return result;
}

void main() {

  sayWelcomeToMe();

  sayWelcomeTo("Peter");
  sayWelcomeTo("Karl");

  sayWelcomeToWithMood("Karl", "wonderful");
  sayWelcomeToWithMood("Peter", "bad");

  // useless
  answerToTheUltimateQuestionOfLifeTheUniverseAndEverything();

  // lets calculate and save the returning answer of the function
  int answer = answerToTheUltimateQuestionOfLifeTheUniverseAndEverything();
  printf("%i\n", answer);

  int var = twotimes(23);
  printf("%i\n", var);

}
