//Converter Metros em Centímetros
#include<stdio.h>

int main(){
	//Declarando variáveis
	int metros, centimetros;

	//Entradas
	printf("Informe o valor em metros: ");
	scanf("%d", &metros);

	//Processamento
	centimetros = (metros * 100);

	//Saída
	printf("%d metros em centímetros é %d", metros, centimetros);

}
