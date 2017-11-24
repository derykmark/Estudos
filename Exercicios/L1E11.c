#include <stdio.h>

void main (void)
{
	int Numero, alg1, alg2, alg3, alg4, soma;
	printf ("Insira o Numero: ");
	scanf ("%i", &Numero);
	alg1 = (Numero % 10 ) * 1000;
	alg2 = ((Numero / 10) % 10 ) * 100;
	alg3 = ((Numero / 100) % 10) * 10;
	alg4 = Numero / 1000;
	soma = alg1 + alg2 + alg3 + alg4;
	if (Numero == soma )
	{
		printf ("O numero eh CAPIUCA");
	}
	else
	{
		printf ("O numero não eh CAPIUCA");
	}
}