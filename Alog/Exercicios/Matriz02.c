#include<stdio.h>
void main (void)
{
	int Tabnum[10];
	int cont, maior, menor;
	
	for (cont = 0; cont <= 9; cont ++)
	{
		printf("\nInsira o Numero :");
		scanf ("%i", &Tabnum[cont]);
		maior = Tabnum[cont];
		menor = Tabnum[cont];
	}
	for (cont = 0; cont <= 9; cont ++)
	{
	    if (Tabnum[cont] > maior )
			maior = Tabnum[cont];
		if (Tabnum[cont] < menor )
			menor = Tabnum[cont];
		
	}	
	printf("\nO maior numero eh: %i\nO menor numero eh: %i", maior, menor);
}