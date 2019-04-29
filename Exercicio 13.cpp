#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float renda_mensal, saude, educacao, alimentacao, vestuario, lazer, outro;
	
	// Entrada de dados
	printf("Programa para distribuir a renda mesnal \n");
	printf("Digite o valor da renda mensal: ");
	scanf("%f", &renda_mensal);

	
	// processamento
	saude = renda_mensal * 0.1;
	educacao = renda_mensal * 0.25;
	alimentacao = renda_mensal * 0.3;
	vestuario = renda_mensal * 0.1;
	lazer = renda_mensal * 0.05;
	outro = renda_mensal * 0.2;
	
	// Saida de dados
	printf("\nO valor total da renda mesnsal: %.2f\n", renda_mensal);
	printf("O valor gasto com: R$ %.2f Saude\n", saude);
	printf("O valor gasto com: R$ %.2f Educacao\n", educacao);
	printf("O valor gasto com: R$ %.2f Alimentacao\n", alimentacao);
	printf("O valor gasto com: R$ %.2f Vestuario\n", vestuario);
	printf("O valor gasto com: R$ %.2f Lazer\n", lazer);
	printf("O valor gasto com: R$ %.2f Outros\n\n", outro);
	
	
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
