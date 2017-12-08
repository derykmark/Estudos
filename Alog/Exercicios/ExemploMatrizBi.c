#include <stdio.h>
// Int TabNum[3][5], o primeiro para de colchetes representa a quantidade de linhas e o segundo par de colchetes o de colunas.
void main (void)
{
	int TabNum[3] [5];
	int lin, col;
	
	for ( lin = 0; lin <=2 ; lin ++)
		for (col = 0; col <= 4; col++)
		{
			printf("Digite um numero inteiro :");
			scanf ("%i", &TabNum[lin] [col]);// Esse colchete serve para inserir o valor dentro da variavel linha e coluna que são representados por lin e col.
		}
		for ( lin = 0; lin <=2 ; lin ++)
			for (col = 0; col <= 4; col++)
				printf ("\nTabNum[%i] [%i] = %i", lin,col,TabNum[lin] [col]);
			
}