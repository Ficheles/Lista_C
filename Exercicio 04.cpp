#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float salario, reajuste, novo_salario;
	
	// Entrada de dados
	printf("Programa para reajuste de Salario\n");
	printf("Digite o valor do salario mensal: ");
	scanf("%f", &salario);
	printf("Digite o percentual de reajuste: ");
	scanf("%f", &reajuste);
	
	
	// processamento
	novo_salario = salario * ( 1 + (reajuste / 100));
	
	// Saida de dados
	printf("\nO salario mensal atual: %.2f\n", salario);
	printf("O novo salario: %.2f\n\n", novo_salario);
	
	system("pause");
	//getch(); // Aguardar tecla para sair
	return 0;
}
