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

void tabuadacompleta(int i)
{
	if (i == 10)
	{
		return;
	}
	else
	{	
		tabuada (i, 1);
		tabuadacompleta(i+1);
	}
}

int main()
{
	
	tabuadacompleta(8);

	return 0;
}
