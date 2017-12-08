#include <stdio.h>

//Rotina Dobro
void Dobro(void)
{
	int Numero, Dobro;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &Numero);
	Dobro = Numero * 2;
	printf("Dobro: %i", Dobro);
}

//Função CalcDesconto
float CalcDesconto(float VC)
{
	float Desc;
	
	if (VC >=800)
		Desc = 0.15 * VC;
	else
		Desc = 0;
	return(Desc);
}


//Rotina Venda
void Venda(void)
{
	int Codigo, QtdeVend;
	float PrecUnit, ValComp, ValPagar;
	
	printf("\n Digite o codigo do produto: ");
	scanf("%i", &Codigo);
	printf("Digite o preço unitario :"); 
	scanf("%f", &PrecUnit);
	printf("Digite a quantidade vendida: ");
	scanf("%i", &QtdeVend);
	ValComp = QtdeVend * PrecUnit;
	ValPagar = ValComp - CalcDesconto(ValComp);
	printf("\n\nValor da compra %.2f",ValComp);
	printf("\nValor do desconto %.2f",CalcDesconto(ValComp));
	printf("\nValor a Pagar %.2f", ValPagar);
}


//Função CalcMedia
float CalcMedia (float P1, float P2)
{
	float Media;
	
	Media = (P1 + P2)/2;
	
	return(Media);
	
}


//Rotina Media
void Media(Void)
{
	int Codigo;
	float Prv1, Prv2;
	
	printf("\n Digite o codigo do Aluno: ");
	scanf("%i", &Codigo);
	while (Codigo >0)
	{
		printf("Digite a nota da primeira Prova: ");
		scanf("%f", &Prv1);
		printf("Digite a nota da segunda prova: ");
		scanf("%f", &Prv2);
		printf("\nMedia do aluno: %.1f", CalcMedia(Prv1, Prv2));
		if (CalcMedia (Prv1,Prv2) >= 5)
			printf("\nO aluno esta Aprovado" );
		else
			printf("\nO aluno esta reprovado");
		
		printf("\nDigite o Codigo do Aluno: ");
		scanf("%i",&Codigo);
	}
}

//Rotina Tabuada
void Tabuada(int F, int Q)
{
	int Cont, Resultado;
	
	for (Cont = 1; Cont <=Q; Cont ++)
	{
		Resultado = F * Cont;
		printf("\n%i x %i = %i", F, Cont, Resultado);
	}
}



//Exercícios Básicos
void main(void)
{
   int Opcao, Numero, QtdeElem;    
   
   do {
         printf("\n\nDigite:");
         printf("\n\n1 - Dobro do Numero");
         printf("\n2 - Venda do Produto");
         printf("\n3 - Media do Aluno");
         printf("\n4 - Tabuada");
         printf("\n5 - Sair");
         printf("\n\nOpcao => ");
         scanf("%i", &Opcao);
		 
		 if (Opcao == 1)
			Dobro(); // Chamada da Rotina
		else
			if(Opcao == 2)
				Venda(); // Chamada de Rotina
			else
				if(Opcao == 3)
					Media(); // Chamada da Rotina
				else
					if(Opcao == 4 )
					{
						printf ("Digite o Fator: ");
						scanf("%i", &Numero);
						printf("Digite a Quantidade de elementos: ");
						scanf("%i", &QtdeElem);
					
						Tabuada(Numero, QtdeElem); //chamada da Rotina
					}
   } while (Opcao < 5);
}