#include<stdio.h>

void main (void)
{
	float valAplic, taxJuros, valJuros, valor;
	int qtMeses, Contadora;
	printf ("Insira o valor aplicado: ");
	scanf ("%f", &valAplic);
	printf ("\nInsira a Taxa de Juros: ");
	scanf ("%f", &taxJuros);
	printf ("\nInsira a Quantidade de meses: ");
	scanf ("%i", &qtMeses);
	valor = valAplic;
	
	for (Contadora = 1; Contadora <= qtMeses; Contadora = Contadora + 1)
	
		valor = valor + valor * taxJuros / 100;
		
	
	valJuros = valor - valAplic;
	printf ("\nO valor do Juros eh: %.2f", valJuros);
	
}