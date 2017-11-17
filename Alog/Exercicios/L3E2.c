#include <stdio.h>

void main(void)
{
	int Nposit, Nnegat, Cont;
	float Nentr;
	Nposit = 0;
	Nnegat = 0;
	for (Cont = 1; Cont <= 10; Cont = Cont+1)
	{
		printf("\nInsira o numero de Entrada: ");
		scanf ("%f", &Nentr);
		if (Nentr >=0 )
		{
			Nposit = Nposit + 1;
			
		}
		else 
		{
			Nnegat = Nnegat + 1;
		}
	}
	printf ("\n Os numeros positivos sao: %i, os Numeros Negativos sao: %i", Nposit, Nnegat);
	
}