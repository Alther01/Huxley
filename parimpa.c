#include <stdio.h>
#include <stdlib.h>


int cicle(long long int n1, int i){
    if(n1 == 1)
        return i;
    if(n1 % 2 == 0)
        n1 = n1/2;
    else
        n1 = n1*3 +1;
    i++;
    printf("%Ld %d\n", n1, i);
    cicle(n1, i);
}
int somadora_n(long long int n1,long long int n2, int i, int biggercicle, int n_biggercicle){
   
    int contador = cicle(n1, i);
    
    return contador;
   
    /*if(i > biggercicle)
        biggercicle = contador;
        n_biggercicle = n1;
    
    return biggercicle;
    /*cicle(n1 + 1, i);
    somadora_n(n1, n2, i, biggercicle, n_biggercicle);*/
    
}
int pegadora(long long int n1,long long int n2, int i, int biggercicle, int n_biggercicle){
    
    scanf("%Ld%Ld", &n1, &n2);
    
    if(n1 == 1 && n2 == 2);
        return printf("parou\n");
    
    int maiorciclo = somadora_n(n1, n2, i, biggercicle, n_biggercicle);
    
    printf("%Ld %Ld %d\n", n1, n2, maiorciclo);
    
   pegadora(0,0,1,0,0);
    
    
} 

int main ()
{
  pegadora(0,0,1,0,0);

  return 0;
}
