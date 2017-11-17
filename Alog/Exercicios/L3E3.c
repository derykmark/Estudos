#include <stdio.h>
#include <conio.h>

void main(void)
{
	char Tipo;
	float Valpass, Valfin;
	int indent;
	Valfin = 0;
	printf ("\nInsira a Indentidade: ");
	scanf ("%i", &indent);
	while (indent > 0)
	{
		printf("\nInsira o Valor da Pasagem: ");
		scanf ("%f", &Valpass);
		printf("\nInsira o Tipo de Passagem: ");
		Tipo = getche();

		
		if (Tipo == 'i' || Tipo == 'I')
		{
			Valpass = Valpass * 0.65;
		}
		if (Tipo == 'e' || Tipo == 'E')
		{
			Valpass = Valpass * 0.75;
		}
		Valfin = Valfin + Valpass;
		printf ("\nO valor a pagar eh: %.2f", Valfin);
		printf("\n\nInsira a Indentidade: ");
		scanf("%i", &indent);
	}
	if (indent == 0)
	{
		printf ("\n%i", indent);
	}
	
}