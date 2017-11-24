#include <stdio.h>

void main(void)
{
	int NumDup;
	float Vdup, DiasAtraso, TaxapDia,Vtotal;
	printf ("Numero da Duplicata: ");
	scanf ("%i", &NumDup);
	printf (" Valor da Duplicata: ");
	scanf ("%f", &Vdup);
	printf ("Dias em Atraso: ");
	scanf ("%f", &DiasAtraso);
	printf ("Taxa por Dia: ");
	scanf ("%f", &TaxapDia);
	TaxapDia = TaxapDia/100  ;
	Vtotal = Vdup + (DiasAtraso * TaxapDia);
	printf ("\n Numero da Duplicata: %i\n Valor Total a Pagar: %f", NumDup, Vtotal);
	
	
}
