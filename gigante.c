#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	void somadora(int size_a,int size_b,char string_a,char string_b, int i){
		if(i == size_a - 1){
			return;
		}
		if(i >= size_b){
			string_b[i] = 0; 
		}
		int soma = string_a[i] + string_b[i];
		if(soma > 9){
			soma = (string_a[i] + string_b[i]) % 10;
			string_a[i + 1] += 1;
		}
		i++;
		somadora(size_a, size_b, string_a, string_b, i);
		printf("%d\n", soma);
	}
	void inversora(char string[], int size, int i){
		if(i == size/2){
			return;
		}
		int aux = string[i] - '0';
		string[i] = string[size - i - 1 ] - '0';
		string[size - i - 1] = aux;
		printf("%s\n", string);
		inversora(string, size, i + 1);
	}
	int armazenadora(char string_aux[], int i){
		scanf("%s", string_aux);
		int size = strlen(string_aux);
		return size;
	}
	int main(){
		char string_a[10000];
		char string_b[10000];
		int size_a = armazenadora(string_a, 0);
		int size_b = armazenadora(string_b, 0);
		inversora(string_a, size_a, 0);
		inversora(string_b, size_b, 0);
		if(size_a >= size_b){
			somadora(size_a, size_b, string_a, string_b, 0);
		}
		/*if(size_b > size_a){
			somadora(size_a, size_b, string_a, string_b);
		}*/		
		return 0;
	}
	/*0 1 2 3 -- 4
	a b c d
	int aux = string[i];
	string[i] = string[size - i - 1];
	string[size - i - 1] = aux;*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 800
	void somadora(int size_a,int size_b,char string_a,char string_b, int i){
		
	}
	void inteirona(int size, char string[], int i, int inteiro[]){
		if(i == size){
			return;
		}
		inteiro[tam - size + i] = string[i] - '0';
		inteirona(size, string, i + 1, inteiro);
	}
	int armazenadora(char string_aux[], int i){
		scanf("%s", string_aux);
		int size = strlen(string_aux);
		return size;
	}
	int main(){
		int inteiro_a[tam];
		int inteiro_b[tam];
		char string_a[tam];
		char string_b[tam];
		int size_a = armazenadora(string_a, 0);
		int size_b = armazenadora(string_b, 0);
		//inversora(string_a, size_a, 0);
		//inversora(string_b, size_b, 0);
		inteirona(size, string_a, 0, inteiro_a);
		inteirona(size, string_b, 0, inteiro_b);
		somadora(size_a, size_b, string_a, string_b, 0);
		}
		return 0;
	}
