#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float total, valor_maria, valor_jose, percentual_maria, percentual_jose;
	
	// Entrada de dados
	printf("Programa para calcular participacao dos socios \n");
	printf("Digite o valor da economia de Maria: ");
	scanf("%f", &valor_maria);
	printf("Digite o valor da economia de Jose: ");
	scanf("%f", &valor_jose);
	
	// processamento
	total = valor_maria + valor_jose ;
	percentual_maria = valor_maria / total * 100;
	percentual_jose  = valor_jose  / total * 100;
	
	// Saida de dados
	printf("\nA valor total das economias: %.2f\n", total);
	printf("A porcentagem de Maria: %.2f%% \n", percentual_maria);
	printf("A porcentagem de Jose : %.2f%% \n\n", percentual_jose);
	
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
