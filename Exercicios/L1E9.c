#include <stdio.h>

void main(void)
{
	int Entrada, HH, MM, SS, Saida;
	printf("Insira a Entrada de Horario: ");
	scanf ("%i", &Entrada);
	SS = Entrada % 60;
	MM = (Entrada / 60) % 60;
	HH = (Entrada / 60) / 60;
	Saida = HH * 10000 + MM * 100 + SS;
	printf ("\n O horario de saida eh: %i", Saida);
	
}