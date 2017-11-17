#include <stdio.h>

void main(void)
{
	int Nentr, Nsaid, Cont;
	
	for (Cont = 1; Cont <= 10; Cont = Cont+1)
	{
		printf ("\n\nDigite o Numero de entrada: ");
		scanf ("%i", &Nentr);
		Nsaid = Nentr * 2;
		printf ("\nO numero multiplicado eh: %i", Nsaid);
		
	}
}
