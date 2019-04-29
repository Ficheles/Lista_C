#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float cotacao, dolar, reais;
	
	// Entrada de dados
	printf("Programa para conversao de Dolares em reais\n");
	printf("Digite a quantidade de dolares: ");
	scanf("%f", &dolar);
	printf("Digite a cotacao do Dolar hoje: ");
	scanf("%f", &cotacao);
	
	// processamento
	reais = cotacao * dolar;
	
	// Saida de dados
	printf("As economias em dolar: %.2f\n", dolar);
	printf("As economias em reais: %.2f\n\n", reais);
	
	system("pause");
	//getch(); // Aguardar tecla para sair
	return 0;
}
