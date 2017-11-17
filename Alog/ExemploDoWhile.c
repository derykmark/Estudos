#include <stdio.h>
#include <conio.h>

void main(void)
{
	int IdadeAnos, IdadeDias;	
	char Continua;	

	do{
	    printf("\nDigite sua idade em anos: ");
	    scanf("%i", &IdadeAnos);		
	    IdadeDias = IdadeAnos * 365;
	    printf("Sua idade em dias: %i", IdadeDias);
		
		printf("\n\nDeseja Continuar(S/N)? ");
	    Continua = getche();	   
	}while (Continua == 'S' || Continua == 's');	
}