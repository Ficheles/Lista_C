#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float conta, agua, esgoto;
	
	// Entrada de dados
	printf("Programa para calcular conta de agua residencial \n");
	printf("Digite a tarifa da agua: ");
	scanf("%f", &agua);
	
	// processamento
	esgoto = agua * 0.8 ;
	conta  = agua + esgoto;
	
	// Saida de dados
	printf("\nA valor da tarifa de agua: %.2f\n", agua);
	printf("A valor da tarifa de esgoto: %.2f\n", esgoto);
	printf("A valor total da conta: %.2f\n\n", conta);
	
	system("pause");
	//getch(); // Aguardar tecla para sair
	return 0;
}
