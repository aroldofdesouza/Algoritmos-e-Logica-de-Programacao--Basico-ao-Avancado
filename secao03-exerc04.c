#include <stdio.h>

int main(){
	//Declarando variáveis
	int num1, num2, soma;

	//Entradas
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	printf("Informe o segundo número: ");
	scanf("%d", &num2);

	//Processamento
	soma = (num1 + num2);

	printf("A soma de %d mais %d é igual a %d", num1, num2, soma);
}
