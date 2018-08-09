#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void  ataques (int v1, int d1, int v2, int d2)
{
	
	if(v2/d1 <= v1/d2) 
	{
		printf("Clodes\n");
	}
	else
	{
		printf("Bezaliel\n");
	}

	v1 -= d2;

	printf("%d\n", v1);

	ataques(v1, d1 + 50, v2, d2);
}

int batalha (double parada, double contador)
{
	if (parada == contador)
		return 0;

	double v1, v2, d1, d2;

	scanf("%lf%lf%lf%lf", &v1, &d1, &v2, &d2);

	ataques (v1, d1, v2, d2);	

	batalha (parada, contador + 1);

}

int main() 
{
	double parada;

	scanf("%lf", &parada);

	batalha(parada, 0);

	return 0;
}
