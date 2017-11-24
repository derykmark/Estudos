#include <stdio.h>
#include <conio.h>

void main (void)
{
	char TabLetras[50];
	int cont, QtdeA, QtdeE, QtdeI, QtdeO, QtdeU;
	
	QtdeA = 0;
	QtdeE = 0;
	QtdeI = 0;
	QtdeO = 0;
	QtdeU = 0;
	
	for (cont = 0; cont<=49; cont++)
	{
		printf("\nInsira a Letra: ");
		TabLetras [cont] = getche() ;
		
	}
	for (cont = 0; cont <= 49; cont ++)
	{
		if (TabLetras [cont] == 'A' || TabLetras [cont] == 'a')
			QtdeA = QtdeA +1;
		if (TabLetras [cont] == 'E' || TabLetras [cont] == 'e')
			QtdeE = QtdeE +1;
		if (TabLetras [cont] == 'I' || TabLetras [cont] == 'i')
			QtdeI = QtdeI +1;
		if (TabLetras [cont] == 'O' || TabLetras [cont] == 'o')
			QtdeO = QtdeO +1;
		if (TabLetras [cont] == 'U' || TabLetras [cont] == 'u')
			QtdeU = QtdeU +1;
			
	}
	printf ("\nTotal A: %i\nTotal E: %i\nTotal I:  %i\nTotal O: %i\n Total U: %i ", QtdeA, QtdeE, QtdeI, QtdeO, QtdeU);
}