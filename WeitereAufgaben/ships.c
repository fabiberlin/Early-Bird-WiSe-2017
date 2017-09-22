#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

#define TABLEDIM 7

static char DIRECTION[2][100] = {"Vertical", "Horizontal"}; //just for Debugging
static char TOKEN[4][3] = {" ", " ", "+", "#"}; //Change 2. for Cheating {" ", "0", "#"}

static int shiptable[TABLEDIM][TABLEDIM]; //the playground

void init(){
  srand(time(NULL));
  //table init with 0s
  for (int i = 0; i < TABLEDIM; i++) {
    for (int j = 0; j < TABLEDIM; j++) {
      shiptable[i][j]=0;
    }
  }
}

void setRandomShips(){
  //for all ships (length 2 - 5)
  for (int i = 2; i < 6; i++) {
    //generate direction --> 1 is horizontal | 0 is vertical
    bool direction = rand() % 2;
    if (direction) { //horizontal
      //startposition
      int startX = rand() % (TABLEDIM - i);
      int startY = rand() % TABLEDIM;
      printf("ship at %i / %i with length %i (%s)\n", startX, startY, i, DIRECTION[direction]); //Debugging
      //check if ship has space
      bool shipHasSpace = true;
      for (int j = 0; j < i; j++) {
        if (shiptable[startX + j][startY] == 1) { //if there is already another ship
          shipHasSpace = false;
        }
      }
      if (shipHasSpace) {
        //for each shipsegment set 1
        for (int j = 0; j < i; j++) {
          shiptable[startX + j][startY] = 1;
        }
      }else{
        i--;
      }
    }
    else{ //vertical
      //startposition
      int startX = rand() % TABLEDIM;
      int startY = rand() % (TABLEDIM - i);
      printf("ship at %i / %i with length %i (%s)\n", startX, startY, i, DIRECTION[direction]); //Debugging
      //check if ship has space
      bool shipHasSpace = true;
      for (int j = 0; j < i; j++) {
        if (shiptable[startX][startY + j] == 1) { //if there is already another ship
          shipHasSpace = false;
        }
      }
      if (shipHasSpace) {
        //for each shipsegment set 1
        for (int j = 0; j < i; j++) {
          shiptable[startX][startY + j] = 1;
        }
      }else{
        i--; //Decrease Index and try Again
      }
    }
  }
}

void printShipTable(){
  //print table
  printf("\n     0  1  2  3  4  5  6\n");
  for (int i = 0; i < TABLEDIM; i++) {
    printf("\n%i   ", i);
    for (int j = 0; j < TABLEDIM; j++) {
      printf(" %s ", TOKEN[shiptable[j][i]]);
    }
  }
  printf("\n");
}

void getUserInput(int *userX, int *userY){
  printf("\nX: ");
  scanf("%i", userX);
  printf("Y: ");
  scanf("%i", userY);
}

int isGameOver(){
  for (int i = 0; i < TABLEDIM; i++) {
    for (int j = 0; j < TABLEDIM; j++) {
      if (shiptable[i][j]==1) { //If there is still a ship - return "false"
        return 0;
      }
    }
  }
  return 1;
}

void main(){
  init();
  setRandomShips();
  printShipTable();
  system("clear");

  int trial = 1;

  while (!isGameOver()) {
    //read user input
    printf("Where you wanna shoot?");
    int userX, userY;
    getUserInput(&userX, &userY);
    system("clear");
    //check hit
    if (shiptable[userX][userY] == 1) { //hit
      printf("You hit a ship!!!!!!!! Congratulation.");
      shiptable[userX][userY] = 3;
    }else{ //miss
      printf("Damm, there wasnt a ship.");
      shiptable[userX][userY] = 2;
    }
    printf(" (Round %i)", trial);
    trial++;
    printShipTable();
  }
  //end of game message
  printf("Awesome, you hit em all!!\nThanks for playing..");
}
