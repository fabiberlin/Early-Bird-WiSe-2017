#include <stdio.h>

int main()
{
    // using pre- & postincrement operators
    int bla = 0;
    printf("%i\n", bla);
    printf("%i\n", bla++);
    printf("%i\n", bla);
    printf("%i\n", bla + 1);
    printf("%i\n", bla);
    printf("%i\n", ++bla);
    printf("%i\n", bla);

    //##########################
    printf("\n--------------\n");

    int a = 0;
    while (a < 10) {
      printf("%i ",a);
      a = a + 1;
    }

    //##########################
    printf("\n--------------\n");

    int b = 0;
    do {
      printf("%i ",b++);
    } while (b < 10);

    //##########################
    printf("\n--------------\n");

    int c = 10;
    while (c >= 0) {
      printf("%i ",c--);
    }

    //##########################
    printf("\n--------------\n");

    for(int i = 0; i <= 10; i++) {
      printf("%i ", i);
    }

    //##########################
    printf("\n--------------\n");

    int j = 0;
    while (1) {
      printf("Hello world!\n");
      if(j++ > 5) {
        break;
      }
    }

    //##########################
    printf("\n--------------\n");

    int m = 0;
    while (m < 10) {
      m++;
      if(m%2==0){
        continue;
      }
      printf("%i ",m);

    }

    //##########################
    printf("\n--------------\n");

    for (int l = 0; l < 50; l++) {
      printf("%i ", l );
    }


    //##########################
    printf("\n--------------\n");

    /*
    This is an endless loop
    for( ; ; ) {
      printf("Zzzzz.\n");
    }
    */

    return 0;
}
