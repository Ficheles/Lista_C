#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float fx, x;
	
	// Entrada de dados
	printf("Programa para calcular a fun��o f(x) = 2x + 4\n");
	printf("Digite o valor de \"x\": ");
	scanf("%f", &x);
	
	
	// processamento
	fx = 2 * x + 4 ;
	
	// Saida de dados
	printf("\nO valor de x: %.2f\n", x);
	printf("O valor da funcao f(x): %.2f\n\n", fx);
	
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
