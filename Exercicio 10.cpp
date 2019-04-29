#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float farenheit, celsius;
	
	// Entrada de dados
	printf("Programa para conversao de Farenheit em Celsius\n");
	printf("Digite a temperatura em : ");
	scanf("%f", &farenheit);
	
	
	
	// processamento
	celsius = 5.0 / 9.0 * (farenheit - 32.0) ;
	
	
	
	// Saida de dados
	printf("\nA temperatura em graus Celsius: %.2f\n\n", celsius);
	
	system("pause");
	//getch(); // Aguardar tecla para sair
	return 0;
}
