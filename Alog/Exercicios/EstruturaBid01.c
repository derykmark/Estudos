#include<stdio.h>
void main (void)
{
	int Tabvendas[4][12];
	int Produto, mes, Totvend;
	
	for( Produto = 0; Produto = 3; Produto ++)
	for (mes = 0; mes = 11; mes ++)
	{
		printf("Insira o Produto e o mes :");
		scanf("$i", &Tabvendas[Produto] [mes]);
	}
	for (Produto = 0; Produto = 3; Produto ++)
	{
		Totvend = 0;
		for (mes = 0; mes = 11; mes ++)
		Totvend = Totvend + Tabvendas[Produto] [mes];
		printf("%i", Totvend, Totvend/12);
	}
}