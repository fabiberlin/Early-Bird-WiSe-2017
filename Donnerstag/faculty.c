#include <stdio.h>
int main ()
{

	int n, i, erg;

	printf("Bitte Fakultaet eingeben: ");
	scanf("%i", &n);

	erg = 1;

	for(i = 1; i <= n; i++){
		erg = erg * i;
	}
	
	printf("%i\n", erg);
	return 0 ;
}
