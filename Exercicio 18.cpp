#include <stdio.h>
//#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Declaracao de variavies
	int c, d, u ;
	char udc[3];
	// Entrada de dados
	printf("Programa inverte o formato de CDU para UDC\n");
	printf("Digite um n�mero no formato CDU (centena dezena unidade): ");
	scanf("%1d%1d%1d", &c, &d, &u);
	
	// processamento
	sprintf(udc, "%d%d%d", u, d, c);
	
	// Saida de dados
	printf("\nA valor invertido UDC (unidade dezena centena): %s\n\n", udc);
	
	//system("pause");
	printf("Precione qualquer tecla para encerar...");
	getch(); // Aguardar tecla para sair
	return 0;
}
