#include <stdio.h>
#include <stdlib.h>

char matchingWord[20];
int matchingWordLength;
char userWord[20];
char alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};

int isGameOver(){
  for (int i = 0; i < matchingWordLength; i++) {
    if (userWord[i] == '-') {
      return 0; //Wort wurde noch nicht erraten
    }
  }
  return 1;
}

int main(void) {

   printf("Please enter a Word : ");
   fgets(matchingWord, 20, stdin);
   int i;
   for(i=0; matchingWord[i] != '\0'; i++);
   printf("Length of %s: %i\n", matchingWord, i-1);
   matchingWordLength = i-1;
   for (i = 0; i < matchingWordLength; i++) {
     userWord[i]='-';
   }
   printf("matchingWord %s\n", matchingWord);
   printf("matchingWordLength %i\n", matchingWordLength);
   printf("userWord %s\n", userWord);

   while (!isGameOver()) {
     system("clear");
     printf("%s\n", alphabet);
     printf("%s\n", userWord);
     printf("Enter a Letter: ");
     char userInput;
     scanf("%c", &userInput);
     printf("You entered: %c\n", userInput);
     for (i = 0; i < 26; i++) {
       if (alphabet[i] == userInput) {
         alphabet[i]='_';
       }
     }
     for (i = 0; i < matchingWordLength; i++) {
       if (matchingWord[i] == userInput) {
         userWord[i] = userInput;
       }
     }
   }
   system("clear");
   printf("End of Game --> %s", matchingWord);

   return 0;
}
