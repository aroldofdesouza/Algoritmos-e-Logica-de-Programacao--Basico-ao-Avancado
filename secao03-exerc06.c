/* Faça um programa que pergunte quanto voce ganha por hora
 * e o numero de horas trabalhadas no mês.
 * Calcule e mostre o total do seu salário no referido mês. */

#include<stdio.h>

int main(){
	//Declaração de variáveis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//Entradas
	printf("Qual o valor que você ganha por hora? ");
	scanf("%f",&valor_por_hora);

	printf("Quantas horas você trabalhou esse mês? ");
	scanf("%d",&horas_trabalhadas);

	//Processamento
	salario = (horas_trabalhadas * valor_por_hora);

	//Saída
	printf("Neste mês você vai receber R$ %.2f", salario);


}
