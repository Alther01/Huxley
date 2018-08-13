#include <stdio.h>
#include <stdlib.h>

void somadora(int caixas, int tamanho, int contador)
{
	if(tamanho == 'p' || tamanho == 'P')
		xicaras += 10;
	else
		xicaras += 16;

	cafe(xicaras, contador);
}

int cafe (int xicaras, int contador)
{
	int caixas;
	char tamanho;

	if(contador == 7)
	{
		printf("%d\n", xicaras);
		return xicaras;
	}

	scanf("%d %s", &caixas, &tamanho);

	somadora(caixas, tamanho, contador + 1);
}

int main()
{
	printf("%d\n", cafe(0,0)/7);

	retun 0;
}