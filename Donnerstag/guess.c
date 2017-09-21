#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
    int random;
    int guess;
    int guessCount = 0;

    srand(time(NULL));
    random = 1 + rand() % 100;

    printf("Errate eine Zufallszahl zwischen 1 und 100.\n");

    for (;;) { // endless loop
        printf("%i. Versuch: ",++guessCount);
        scanf("%i", &guess);
        if (guess>random)
            printf("die gesuchte Zahl ist kleiner!\n");
        else if (guess<random)
            printf("die gesuchte Zahl ist groesser!\n");
        else {
            printf("Glueckwunsch! Die Zahl war %i.\n",random);
            break;
        }
    }
    return 0;
}
