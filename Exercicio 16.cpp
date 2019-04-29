#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	int brancos, nulos, validos, total;
	float percentual_brancos, percentual_nulos, percentual_validos;
	
	// Entrada de dados
	printf("Programa para calcular realacao das escolhas dos eleitores\n");
	printf("Digite a quantidade de votos brancos: ");
	scanf("%d", &brancos);
	printf("Digite a quantidade de votos nulos: ");
	scanf("%d", &nulos);
	printf("Digite a quantidade de votos validos: ");
	scanf("%d", &validos);
	
	// processamento
	total = brancos + nulos + validos;
	percentual_brancos = brancos * 100 / total;// * 100;
	percentual_nulos   = nulos * 100 / total;// * 100;
	percentual_validos = validos * 100 / total;// * 100;
	
	// Saida de dados
	printf("\nO total de votos: %d\n", total);
	printf("O percentual %.2f%% Brancos\n", percentual_brancos);
	printf("O percentual %.2f%% Nulos\n", percentual_nulos);
	printf("O percentual %.2f%% VAlidos\n\n", percentual_validos);
	
		
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
