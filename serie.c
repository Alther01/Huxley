#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int x, int i)
{
    float r = sqrt(x);

    if (i > r)
    {
        return 1;
    }
    else if (x % i == 0)
    {
        return 0;
    }

    primo (x, i+1);
}

int pprimo(n_primo)
{
    if()
}

int fatorial(int n)
{

  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
      return n * fatorial(n-1);
  }
  
  return 0;
}

int serie(int n_primo, int n_fatorial, int c, double soma)
{

    if(c == 1)
    {
        printf(" %d!/%d\n",n_fatorial,n_primo);

        soma = fatorial(n_fatorial)/primo(n_primo, 2);

        return printf("%.2lf\n", soma+1);
    }
    if(n_fatorial == 1)
        printf("1!/1 +");
    else
        printf(" %d!/%d +",n_fatorial,n_primo);

    soma = fatorial(n_fatorial)/primo(n_primo, 2);

    serie (n_primo + 1, n_fatorial + 1, c -1, soma);
}
int main()
{
    int n;
    scanf("%d", &n);

    if(n==0)
        return printf("0.00\n");
    else
        serie(1, 1, n, 0);

    return 0;
}

