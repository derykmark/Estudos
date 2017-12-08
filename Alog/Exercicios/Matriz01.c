#include<stdio.h>
#include<conio.h>
void main(void)
{
	char Tabletras[50];
	int cont, QtdeA, QtdeE, QtdeI, QtdeO, QtdeU;
	QtdeA = 0;
	QtdeE = 0;
	QtdeI = 0;
	QtdeO = 0;
	QtdeU = 0;
	
	for (cont = 0; cont <= 49; cont ++)
	{
		printf("\ninsira a Letra: ");
		Tabletras[cont] = getche();
	}	
		for (cont = 0; cont <= 49; cont ++)
		{
			if( Tabletras[cont] == 'A' || Tabletras[cont] == 'a')
				QtdeA = QtdeA + 1;
			if( Tabletras[cont] == 'E' || Tabletras[cont] == 'e')
				QtdeE = QtdeE + 1;
			if( Tabletras[cont] == 'I' || Tabletras[cont] == 'i')
				QtdeI = QtdeI + 1;
			if( Tabletras[cont] == 'O' || Tabletras[cont] == 'o')
				QtdeO = QtdeO + 1;
			if( Tabletras[cont] == 'U' || Tabletras[cont] == 'u')
				QtdeU = QtdeU + 1;
			
		}
	printf ( "\nQuantidade de letras A:%i\nQuantidade de Letras E:%i\nQuantidade de Letras I:%i\nQuantidade de Letras O:%i\nQuantidade de Letras U:%i ", QtdeA, QtdeE, QtdeI, QtdeO, QtdeU );
	
}