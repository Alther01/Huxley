#include <stdio.h>

typedef struct {
  int idade;
  float peso, altura;
} pessoa;

void hp(int n, pessoa array[], int i)
{
  if(i == n) return;
  printf("%.1d %.1f %.1f\n", array[i].idade, array[i].peso, array[i].altura);
  print(n, array, i + 1);
}

void warehouse(int n, pessoa array[], int i)
{
  if(i == n) return;
  scanf("%d%f%f", &array[i].idade, &array[i].peso, &array[i].altura);
  warehouse(n, array, i + 1);
}

int main()
{
  int q;
  scanf("%d\n", &q);
  pessoa povo[q];
  warehouse(q, povo, 0);
  hp(q, povo, 0);
  return 0;
}

/*struct pessoa {
  int idade;
  float peso, altura;
};*/

/*struct pessoa alther;

scanf("%d%f%f", &alther.idade, &alther.peso, &alther.altura);

printf("%d %f %f\n", alther.idade, alther.peso, alther.altura);*/


#include <stdio.h>

typedef struct {
  int idade;
  float peso, altura;
} pessoa;

int main()
{
  int q, i;
  scanf("%d", &q);
  pessoa povo[q];


  for(i = 0; i < q; i++){
    scanf("%d%f%f", &povo[i].idade, &povo[i].peso, &povo[i].altura);
  }


  for(i = 0; i < q; i++){
    printf("%d %f %f\n", povo[i].idade, povo[i].peso, povo[i].altura);
  }


  return 0;
}
