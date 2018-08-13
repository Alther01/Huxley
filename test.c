#include <stdio.h>
#include <stdlib.h>

void somadora(int caixas, int tamanho, int contador, int pacotes)
{
    int aux = 1;
    
	if(tamanho == 'p' || tamanho == 'P')
	{
		pacotes += 10;
		
		aux == caixas * 10;
		printf("%d\n", aux);
	}
	else
		pacotes +=16;

	cafe(pacotes, contador);
}

int cafe (int pacotes, int contador)
{
	int caixas;
	char tamanho;

	if(contador == 7)
	{
		printf("%d\n", pacotes);
		return pacotes;
	}

	scanf("%d %s", &caixas, &tamanho);

	somadora(caixas, tamanho, contador + 1, pacotes);
}

int main()
{
	printf("%d\n", cafe(0,0)/7);

	return 0;
}
