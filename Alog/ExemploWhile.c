#include <stdio.h>

void main(void)
{
	int IdadeAnos, IdadeDias;
		
	printf("\nDigite sua idade em anos: ");
	scanf("%i", &IdadeAnos);
	while (IdadeAnos > 0)
	{	
	   IdadeDias = IdadeAnos * 365;
	   printf("Sua idade em dias: %i", IdadeDias);
	   
	   printf("\nDigite sua idade em anos: ");
	   scanf("%i", &IdadeAnos);
	}	
}