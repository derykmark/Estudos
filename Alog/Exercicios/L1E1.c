#include<stdio.h>

void main(void)
{
int QuatVend;
float preco, ValorCompra; 
printf("Digite o preco unitario: ");
scanf("%f", &preco);
printf("Digite a quantidade vendida: ");
scanf("%i", &QuatVend);
ValorCompra = preco * QuatVend;
printf("Valor da compra e igual: %.2f", ValorCompra);
}
