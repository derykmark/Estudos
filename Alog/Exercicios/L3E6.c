#include <stdio.h>

void main (void)
{
	int numPlaca, horaEnt, horaSaid, totalMin;
	float valPagar, totalFatur;
	
	totalFatur = 0;
	printf ("Insira o Numero da placa do veiculo :");
	scanf ("%i", &numPlaca);
	
	while (numPlaca > 0 )
	{
		printf ("\nInsira a Hora de entrada do Veiculo: ");
		scanf ("%i", &horaEnt);
		printf ("\nInsira a Hora de saida do Veiculo: ");
		scanf ("%i", &horaSaid);
		totalMin = (horaSaid / 100) * 60 + (horaSaid % 100) - (horaEnt / 100) * 60 + (horaEnt % 100);
		valPagar = (totalMin / 10) * 1.5;
		totalFatur = totalFatur + valPagar;
		printf ("\nO valor a pagar eh: %.2f", valPagar);
		printf ("\nInsira o Numero da Placa: ");
		scanf ("%f", &numPlaca);
	}
	printf ("O total Faturado no dia de hoje foi :%.2f", totalFatur);
}