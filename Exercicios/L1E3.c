#include<stdio.h>

void main(void)
{
int Dias;
float ValorDiario, ValorPagar;
printf("Insira os Dias: ");
scanf("%i", &Dias);
printf("Insita o Valor da Diaria: ");
scanf("%f", &ValorDiario);
ValorPagar = ValorDiario * Dias;
printf("O valor a pagar e %.2f", ValorPagar);
  

}