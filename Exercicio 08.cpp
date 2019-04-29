#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float total, moeda_100, moeda_50, moeda_25, moeda_10, moeda_5;
	
	// Entrada de dados
	printf("Programa para somar as moedas informadas\n");
	printf("Digite a quantidade de moedas de R$ 1.00: ");
	scanf("%f", &moeda_100);
	printf("Digite a quantidade de moedas de R$ 0.50: ");
	scanf("%f", &moeda_50);
	printf("Digite a quantidade de moedas de R$ 0.25: ");
	scanf("%f", &moeda_25);
	printf("Digite a quantidade de moedas de R$ 0.10: ");
	scanf("%f", &moeda_10);
	printf("Digite a quantidade de moedas de R$ 0.05: ");
	scanf("%f", &moeda_5);
	
	
	// processamento
	total = 0;
	total = total + moeda_100 * 1.00;
	total = total + moeda_50 * 0.50;
	total = total + moeda_25 * 0.25;
	total = total + moeda_10 * 0.10;
	total = total + moeda_5  * 0.05;	
	
	
	// Saida de dados
	printf("\nO valor total economizado: %.2f\n\n", total);
	
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
