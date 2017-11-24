#include<stdio.h>

void main (void)
{
	int Entrada, alg, algF;
	algF = 0;
	printf ("Insira o valor de entrada: ");
	scanf ("%i", &Entrada);
	
	do {
		alg = Entrada % 10;
		Entrada = Entrada / 10;
		algF = algF + alg;
		if (Entrada > 0)
		{
			algF = algF * 10;
		}
	}while(Entrada > 0);
		printf("\nO Algarismo final eh: %i", algF);
		

}