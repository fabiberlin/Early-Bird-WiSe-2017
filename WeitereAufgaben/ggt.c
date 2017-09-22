
#include <stdio.h>

int ggt(int p, int q) {
    if (p == 0)
        return q;
    while (q > 0) {
        if (p > q)
            p = p-q;
        else
            q = q-p;
    }
    return p;
}

int main() {

    int z1, z2;
    printf("Erste Zahl : ");
    scanf("%i", &z1);
    printf("Zweite Zahl: ");
    scanf("%i", &z2);
    printf("Der ggT ist %i\n", ggt(z1, z2));
    return 0;
    
}
