/*
 Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano
anterior.
Faça um programa que determine o salário atual desse funcionário.
*/
#include<stdio.h>
int main(){

float  sal=1000.0f , aumento=0.0015f;

	int ano;
	for (ano=2006;ano<2021;ano++){
		if (ano==2006)
			sal+=(sal*aumento);
		else{
			aumento=aumento*2;
			sal+=(sal*aumento);
		}
}
		printf("Salario atual = %.2f\n",sal);
		return 0;
		}


