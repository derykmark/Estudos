#include <stdio.h>


void main(void)
{
	int IdadeAnos, IdadeDias, Cont;
		
	for (Cont=1; Cont<=5; Cont=Cont+1)
	{	
	   printf("\nDigite sua idade em anos: ");
	   scanf("%i", &IdadeAnos);
	   IdadeDias = IdadeAnos * 365;
	   printf("Sua idade em dias: %i", IdadeDias);
	}	
}