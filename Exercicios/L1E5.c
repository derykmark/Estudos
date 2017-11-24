#include <stdio.h>

void main(void)
{
	float Peso;
	printf ("Insira o peso: ");
	scanf ("%f", &Peso);
	Peso = Peso * 1000;
	printf ("\n Seu peso em Gramas eh: %.2f", Peso);
	
	
}