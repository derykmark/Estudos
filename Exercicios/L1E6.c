#include <stdio.h>

void main (void)
{
	float Salfix, Vendas, salFinal;
	printf ("Insira o Valor do Salario Fix: ");
	scanf ("%f", &Salfix);
	printf ("Isira o Valor das Vendas: ");
	scanf ("%f", &Vendas);
	Vendas = Vendas * 0.04;
	salFinal = Vendas + Salfix;
	printf ("\n Suas Vendas sao de:  %.2f \n Seu salario final eh: %.2f", Vendas, salFinal);
	
}