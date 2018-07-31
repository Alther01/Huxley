#include <stdio.h>

void tabuada(int n, int i)
{
	
	int resultado;

	if (i == 10)
	{
		if (n == 10)
		{
			return;
		}

		tabuada (n+1, 1);
	}
	else
	{	
		
		printf("%d x %d = %d\n", n, i, n*i);
		tabuada (n, i + 1);
	}


	
}

int main()
{
	int n;

	scanf("%d", &n);

	tabuada (n, 1);

	return 0;
}
