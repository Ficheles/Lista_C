#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	float media_semestral, nota_1_bimestre, nota_2_bimestre;
	
	// Entrada de dados
	printf("Programa calcula a media semestral da notas dos bimestres\n");
	printf("Digite a nota de 0 a 10 para o 1 bimestre: ");
	scanf("%f", &nota_1_bimestre);
	printf("Digite a nota de 0 a 10 para o 2 bimestre: ");
	scanf("%f", &nota_2_bimestre);
	
	
	// processamento
	media_semestral = (nota_1_bimestre * 4 + nota_2_bimestre * 6 ) / 10;	
	
	
	// Saida de dados
	printf("\nA media semestral: %.2f\n\n", media_semestral);
	
	system("pause");
	//getch(); // Aguardar tecla para sair
	return 0;
}
