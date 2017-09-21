#include <stdio.h>

void main()
{
    printf("--------------\n");

    int a = 0;
    while (a <= 10) {
      printf("%d ", a);
      a = a + 1;   //same as a++ or a+=1;
    }

    printf("\n--------------\n");

    int b = 0;
    while (b <= 16) {
      printf("%d ", b);
      b = b + 2;  //same as b+=2;
    }

    printf("\n--------------\n");

    int c = 19;
    while (c >= 1) {
      printf("%d ", c);
      c = c - 2;  //same as c-=2;
    }

    printf("\n--------------\n");

    int d = 0;
    while (d <= 14) {
      printf("%d ", d*d);
      d = d + 1;  //same as d++ or d+=1;
    }

    printf("\n--------------\n");

    int e = 1;
    while (e <= 128) {
      printf("%d ", e);
      e = e * 2;  //same as e*=2;
    }

    printf("\n--------------\n");

}
