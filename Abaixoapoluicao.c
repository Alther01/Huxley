
#include <stdio.h>
#include <stdlib.h>

double multadora(double n){
    double multa;
    //printf("%lf\n",n);
    if(n > 2)
        multa += (n-2) * 12.89;
    //printf("%lf\n",multa);
    return multa;
}
void pegadora(double multa, int i){
    double n;
    scanf("%lf", &n);
    if (n == 999){
     printf("%.2lf\n%d", multa, i);}
    if (n>2){
      multa += multadora(n);
      i++;
    }
    pegadora(multa, i);
}

int main ()
{
  pegadora(0,0);
  return 0;
}
