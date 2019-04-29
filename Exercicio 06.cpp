#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float quilowatt, salario_minimo, valor_conta, valor_quilowatt, valor_com_desconto;
	
	// Entrada de dados
	printf("Programa para calcular custo da fatura de energia\n");
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &salario_minimo);
	printf("Digite a quantidade de quilowatt: ");
	scanf("%f", &quilowatt);
	
	// processamento
	valor_quilowatt = salario_minimo / 5 ;
	valor_conta = quilowatt * valor_quilowatt;
	valor_com_desconto = valor_conta * ( 1 - 0.15);
	
	// Saida de dados
	printf("\nO valor do quilowatt: %.2f\n", valor_quilowatt);
	printf("O valor da conta da residencia: %.2f\n", valor_conta);
	printf("O valor da conta com desconto de 15%: %.2f\n\n", valor_com_desconto);
	
	system("pause");
	//getch(); // Aguardar tecla para sair
	return 0;
}
