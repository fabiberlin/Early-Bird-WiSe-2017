#include <stdio.h>
#include <stdlib.h>

int numOfMaxPoints = 3;
int userPoints[2] = {0,0};
char userInputs[2];

int isGameOver(){
  if (userPoints[0] >= numOfMaxPoints || userPoints[1] >= numOfMaxPoints) {
    return 1;
  }
  return 0;
}

void getUserInput(){
  for (int i = 0; i <= 1; i++) {
    //system("clear");
    printf("Player %i, enter (r)ock, (p)aper or (s)cissors: ", i+1);
    scanf(" %c", &userInputs[i]);
  }
}

void printName(char c){
  if (c == 's') printf("Scissors");
  if (c == 'p') printf("Paper");
  if (c == 'r') printf("Rock");
}

int winner(){
  if (userPoints[0] > userPoints[1]) {
    return 1;
  }
  return 2;
}

int main(){
  while (!isGameOver()) {
    getUserInput();
    //system("clear");

    printName(userInputs[0]);
    printf("\nvs\n");
    printName(userInputs[1]);

    int winner;
    if (userInputs[0] == 's' && userInputs[1] == 'p') {
      winner = 0;
    }else if (userInputs[0] == 'p' && userInputs[1] == 's') {
      winner = 1;
    }else if (userInputs[0] == 'p' && userInputs[1] == 'r') {
      winner = 0;
    }else if (userInputs[0] == 'r' && userInputs[1] == 'p') {
      winner = 1;
    }else if (userInputs[0] == 'r' && userInputs[1] == 's') {
      winner = 0;
    }else if (userInputs[0] == 's' && userInputs[1] == 'r') {
      winner = 1;
    }else{
      winner = 2;
    }
    if (winner != 2) {
      userPoints[winner]++;
      printf("\n\nPlayer %i won that round!\n", winner + 1);
    }else{ //even
      printf("\n\nEven Round\n");
    }
    printf("\nPoints:\nPlayer1: %i\nPlayer2: %i\n\n", userPoints[0], userPoints[1]);
    printf("Press a key to continue!\n");
    getchar();
    getchar();
  }
  system("clear");
  printf("End of Game - Player %i won the game", winner());

  return 0;
}
