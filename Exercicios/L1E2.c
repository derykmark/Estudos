#include<stdio.h>

void main(void)
{
	float lado1, lado2, tela;
	printf("Insira o lado 1: ");
	scanf("%f", &lado1);
	printf("Insira o lado 2: ");
	scanf("%f", &lado2);
	lado1 = lado1 * 2;
	lado2 = lado2 * 2;
	tela = lado1 + lado2;
	printf("A quantidade necessaria de tela e %.2f", tela);
	
}