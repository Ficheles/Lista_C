#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	int centimetros;
	float  metros, km;
	
	// Entrada de dados
	printf("Programa que calcula a distancia de centimetros em km \n");
	printf("Informe a distancia entre duas Universidades \n");
	printf("Digite em centimetros: ");
	scanf("%d", &centimetros);

	
	// processamento
	metros = centimetros / 100;
	km = metros / 1000;
	
	// Saida de dados
	printf("\nA distancia em centimentos: %d\n", centimetros);
	printf("A distancia em metros: %.2f\n", metros);
	printf("A distancia em km: %.2f\n\n", km);
		
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
