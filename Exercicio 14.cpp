#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float horas, minutos;
	
	// Entrada de dados
	printf("Programa para calculo media de tempo estudado em 30 dias \n");
	printf("Digite quantos minutos: ");
	scanf("%f", &minutos);

	
	// processamento
	horas = minutos * 30 / 60;
	
	// Saida de dados
	printf("\nA quantida de em horas de estudo em 30 dias: %.2f\n\n", horas);
		
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
