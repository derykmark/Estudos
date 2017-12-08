#include <stdio.h>
void main (void)
{
	int TabIdade[50];
	int col;
	
	for (col = 0; col <= 49; col = col++)
	{
		printf("Digite uma Idade: ");
		scanf("%i", &TabIdade[col]);
		
	}
	for (col = 0; col <= 49; col = col++)//quando colocamo ++ ou col = col +1, ele vai pegar o numero e somar mais um a atribuir a col, que a variavel que estou usando.
	{
		printf("\nTabIdade[%i]=%i", col, TabIdade[col]);
		
	}
}

// quando quisermos subtrair usamos -- ou variavel = variavel -1.
