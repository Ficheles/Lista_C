#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float minimo, funcionario, quantidade;
	
	// Entrada de dados
	printf("Programa para calcular de salarios\n");
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &minimo);
	printf("Digite o valor do salario do funcionario: ");
	scanf("%f", &funcionario);
	
	
	// processamento
	quantidade = funcionario / minimo;
	
	// Saida de dados
	printf("\nO salario do funcionario: %.2f\n", funcionario);
	printf("O salario minimo: %.2f\n", minimo);
	printf("a quantidade de salarios: %.2f\n\n", quantidade);
	
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
