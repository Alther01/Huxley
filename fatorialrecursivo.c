#include <stdio.h>
#include <stdlib.h>

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
}

void fatorial_n(int x)
{
    if (x == -1)
    {
      return 0;
    }
    else
    {
      printf("%d\n", fatorial(x));

      fatorial_n();
    }


}


int main()
{
  int x;

  scanf("%d\n", &x);

  fatorial_n(x);

  return 0;
}
