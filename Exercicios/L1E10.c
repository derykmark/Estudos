#include <stdio.h>

void main(void)
{
	int numero, soma, alg1, alg2, alg3, alg4, somaPar, somaImp;
	printf ("Insira o numero: ");
	scanf ("%i", &numero);
	alg1 = numero % 10;
	alg2 = (numero / 10) % 10;
	alg3 = ((numero / 100) % 10);
	alg4 = (numero / 1000);
	somaPar = 0;
	somaImp = 0;
	if (alg1 % 2 == 0) 
	{
		somaPar = somaImp + alg1;
	}
	else 
	{
		somaImp = somaImp + alg1;
	}
	if (alg2 % 2 == 0) 
	{
		somaPar = somaImp + alg2;
	}
	else 
	{
		somaImp = somaImp + alg2;
	}
	if (alg3 % 2 == 0) 
	{
		somaPar = somaImp + alg3;
	}
	else 
	{
		somaImp = somaImp + alg3;
	}
	if (alg4 % 2 == 0) 
	{
		somaPar = somaImp + alg4;
	}
	else 
	{
		somaImp = somaImp + alg4;
	}
	printf ("\n A soma dos numeros Pares eh: %i \n A soma dos numeros impares eh: %i", somaPar, somaImp);
	
}