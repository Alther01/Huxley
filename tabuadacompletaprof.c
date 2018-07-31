#include <stdio.h>

void tabuada(int n, int i)
{
	
	int resultado;

	if (i == 10)
	{
		return;
	}
	else
	{			
		printf("%d x %d = %d\n", n, i, n*i);

		tabuada (n, i + 1);
	}
}

void tabuadacompleta(int c)
{
	if (c == 10)
	{
		return;
	}
	else
	{	
		tabuada (c, 1);
		printf("-------------------------\n");
		tabuadacompleta(c+1);
	}
}

int main()
{
	
	tabuadacompleta(1);

	return 0;
}
