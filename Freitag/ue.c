#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARDDIM 7

int board[BOARDDIM][BOARDDIM];
int playerX = 3;
int playerY = 3;

void init () {
  srand(time(NULL));
  for (int y = 0; y < BOARDDIM; y++) {
    for (int x = 0; x < BOARDDIM; x++) {
      board[x][y] = 0;
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
  for (int y = 0; y < BOARDDIM; y++) {
    for (int x = 0; x < BOARDDIM; x++) {
      if (x == playerX && y == playerY) {
        printf(" # ");
      } else if (board[x][y] == 1){
        printf(" + ");
      } else{
        printf("   ");
      }
    }
    printf("\n");
  }
}

bool isGameOver(){
  for (int y = 0; y < BOARDDIM; y++) {
    for (int x = 0; x < BOARDDIM; x++) {
      if (board[x][y] == 1) {
        // hier ist noch Nahrung
        return false;
      }
    }
  }
  return true;
}

void movePlayer(){
  char input;
  scanf(" %c", &input);
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
}

void eatFood(){
  if (board[playerX][playerY] == 1 ) {
    board[playerX][playerY] = 0;
  }
}

int main(int argc, char const *argv[]) {
  init();
  addFood();
  printBoard();

  while (!isGameOver()) {
    movePlayer();
    eatFood();
    system("clear");
    printBoard();
  }
  printf("Yow got em all\n" );

  return 0;
}
