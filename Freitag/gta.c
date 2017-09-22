#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

#define BOARDDIM 7

int board[BOARDDIM][BOARDDIM];
int playerX = 3;
int playerY = 3;

void init(){
  srand(time(NULL));
  //table init with 0s
  for (int y = 0; y < BOARDDIM; y++) {
    for (int x = 0; x < BOARDDIM; x++) {
      board[x][y]=0;
    }
  }
}

void addFood(){
  for (int i = 0; i < 10; i++) {
    int x = rand() % BOARDDIM;
    int y = rand() % BOARDDIM;
    board[x][y] = 1;
  }
}

void printBoard(){
  //print table
  printf("\n     0  1  2  3  4  5  6\n");
  for (int y = 0; y < BOARDDIM; y++) {
    printf("\n%i   ", y);
    for (int x = 0; x < BOARDDIM; x++) {
      if (y == playerY && x == playerX) {
        printf(" # ");
      } else if (board[x][y] == 1) {
        printf(" + ");
      } else {
        printf("   ");
      }
    }
  }
  printf("\n");
}

bool isGameOver(){
  for (int y = 0; y < BOARDDIM; y++) {
    for (int x = 0; x < BOARDDIM; x++) {
      if (board[x][y] == 1){
        return false;
      }
    }
  }
  return true;
}

bool isValidInput(char input){
  return (input == 'w' || input == 'a' || input == 's' || input == 'd');

}

void movePlayer(){
  char input;
  while (true) {
    scanf(" %c", &input);
    if (isValidInput(input)) {
      if (input == 'w') {
        playerY--;
      }
      if (input == 'a') {
        playerX--;
      }
      if (input == 's') {
        playerY++;
      }
      if (input == 'd') {
        playerX++;
      }
      break;
    }
  }
}

void checkFood(){
  if (board[playerX][playerY] == 1) {
    //yammi - remove food
    board[playerX][playerY] = 0;
  }
}

void main() {
  init();
  addFood();
  while (!isGameOver()) {
    system("clear");
    printBoard();
    movePlayer();
    checkFood();
  }
  system("clear");
  printBoard();
  printf("You got em all!!!\n");
}
