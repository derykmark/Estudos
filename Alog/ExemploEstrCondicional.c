#include <stdio.h>

void main(void)
{
      float  NotaBim1, NotaBim2, Media;

      printf("Digite a 1a. Nota: ");
      scanf("%f", &NotaBim1);
      printf("Digite a 2a. Nota: ");
      scanf("%f", &NotaBim2);
      Media = (NotaBim1+NotaBim2)/2;
      printf("\n\nA media e %.1f", Media); 
	  
	  if (Media >=5)
		  printf("\nAluno Aprovado");
	  else
		  printf("\nAluno Reprovado");
}	  




