#include <stdio.h>

void main (void)
{
	
	int numIni, numSom, num1, num2, num3, num4;
	printf ("Insira o Numero Inicial: ");
	scanf ("%i", &numIni);
	num1 = numIni % 10;
	num2 = (numIni % 100) /10;
	num3 = (numIni % 1000) / 100;
	num4 = numIni / 1000;
	num3 = num3 * 10;
	num2 = num2 * 100;
	num1 = num1 * 1000;
	numSom = num1 + num2 + num3 + num4;
	printf ("\n o numero inicial eh: %i \n O numero invertido eh: %i", numIni, numSom);
}