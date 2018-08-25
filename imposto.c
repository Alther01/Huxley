#include <stdio.h>
#include <stdlib.h>


int main (){
  double cotacao, aliquota, produto_d, frete_d, frete_r, produto_r;
  scanf("%lf%lf%lf%lf", &cotacao, &aliquota, &produto_d, &frete_d);
  frete_r = frete_d * cotacao;
  produto_r = produto_d * cotacao;
  if(frete_r <= 2500)
    printf("%.1lf\n%.1lf\n%.1lf\n%.1lf\n", cotacao, produto_d * cotacao, frete_r, (produto_d * cotacao) + frete_r);
  else
    printf("%.1lf\n%.1lf\n%.1lf\n%.1lf\n", cotacao, produto_d * cotacao, produto_r + produto_r + frete_r);
  return 0;
}
