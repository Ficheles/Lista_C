#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float frangos, anel_identificao, tipo_alimento;
	
	// Entrada de dados
	printf("Programa para calcular custo da granja Frangotech\n");
	printf("Digite a quantidade de frangos: ");
	scanf("%f", &frangos);

	
	// processamento
	anel_identificao = frangos * 4.0 ;
	tipo_alimento = frangos * 3.5 ;
	
	
	// Saida de dados
	printf("\nO custo em aneis de identificacao: %.2f\n", anel_identificao);
	printf("O custo com anel do tipo de alimento: %.2f\n\n", tipo_alimento);
	
	system("pause");
	//getch(); // Aguardar tecla para sair
	return 0;
}
