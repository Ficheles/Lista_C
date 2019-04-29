#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float altura, comprimento, largura, volume;
	
	// Entrada de dados
	printf("Programa para calcular o volume\n");
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite a comprimento: ");
	scanf("%f", &comprimento);
	printf("Digite a largura: ");
	scanf("%f", &largura);
	
	// processamento
	volume = altura * comprimento * largura;
	
	// Saida de dados
	printf("O volume da caixa: %.2f\n\n", volume);
	
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
