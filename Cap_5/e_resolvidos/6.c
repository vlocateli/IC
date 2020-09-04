/*
 Uma empresa possui dez funcionários com as seguintes características: código, número de horas traba-
lhadas no mês, turno de trabalho (M — matutino; V — vespertino; ou N — noturno), categoria (O —
operário; ou G — gerente), valor da hora trabalhada. Sabendo-se que essa empresa deseja informatizar
sua folha de pagamento, 
faça um programa que:
a) Leia as informações dos funcionários, exceto o valor da hora trabalhada, não permitindo que sejam informa-
dos turnos e nem categorias inexistentes. Trabalhe sempre com a digitação de letras maiúsculas.
b) Calcule o valor da hora trabalhada, conforme a tabela a seguir. Adote o valor de R$ 450,00 para o salário
mínimo.
c) Calcule o salário inicial dos funcionários com base no valor da hora trabalhada e no número de horas traba-
lhadas.
d) Calcule o valor do auxílio alimentação recebido pelo funcionário de acordo com seu salário inicial, conforme
a tabela a seguir.
e) Mostre o código, número de horas trabalhadas, valor da hora trabalhada, salário inicial, auxílio alimentação
e salário final (salário inicial + auxílio alimentação).
*/
#define SAL_MIN  450.0f
#include<stdio.h>
int main(){
	int num_f=10,hora,cod;
	float valor_hora,sal_p,sal_f,v_alim;
	char trn,cat;
	while(num_f>0){
		printf("Digite o numero do funcionario\n");
		scanf("%d%*c",&cod);
		printf("Digite o numero de horas \n");
		scanf("%d%*c",&hora);
		printf("Digite o turno do trabalho\n");
		scanf("%c%*c",&trn);
		while(trn!='N'&& trn!= 'M' && trn!= 'V' ){
				printf("Turno inexistente\n\a");
				printf("Digite o turno do trabalho\n");
				scanf("%c%*c",&trn);
				}
		printf("Digite a categoria\n");
		scanf("%c%*c",&cat);
		while(cat!='G' && cat!= 'O') {
		  printf("Categoria inválida\n\a");
			printf("Digite a categoria\n");
			scanf("%c%*c",&cat);
			}
	if (cat=='G' && trn=='N')
		valor_hora=0.18f*SAL_MIN;

		else if (cat=='G' &&  (trn=='M' || trn=='V'))
		valor_hora=0.15f*SAL_MIN;

		else if (cat=='O' && trn=='N')
		valor_hora=0.13f*SAL_MIN;

		else
		{
			
			valor_hora=0.10f*SAL_MIN;
		}
	sal_p=valor_hora*hora;
	printf("Salario inicial = %.2f",sal_p);
	if(sal_p<=300)
	v_alim=0.20f*sal_p;

	else if (300<= sal_p && sal_p <=600)
	v_alim=0.15f*sal_p;

	else
	v_alim=0.05f*sal_p;

	sal_f=sal_p+v_alim;
	//prints
	printf("Horas trabalhadas %02d\n",hora);
	printf("Valor hora =%.2f \n",valor_hora);
	printf("Sal final = %.2f\n",sal_f);
	printf("V.A. = %.2f\n",v_alim);
	printf("Salario inciial %.2f\n",sal_p);
	
		
	}
	

		
	return 0;
}

