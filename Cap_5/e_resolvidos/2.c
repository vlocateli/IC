/*
Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, conforme a
fórmula a seguir:


E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/
#include<stdio.h>

double  fat(double n){
	if (n==0)
		return 1.0;
	else
		return n*fat(n-1);
}



int main(){
	double e,n,fatorial;
	printf("Digite o valor de N\n");
	scanf("%lf%*c",&n);
	fatorial=fat(n);
	printf("%.2f\n",fatorial);

	e=e+ 1/fatorial;
	printf("Valor de e = %.2f\n",e);

	return  0;

	//resolucao do exercicio segundo o livro
	/*
	  double n,e,i,j;
	 printf("Digite um numero de \n");
	 scanf("%lf%*c",&n);
	 fat=1
	 for (j=1,j<=i,j++){
	 fat=fat*j
	 }

	 e=e+1/fat;
	 printf("%.2f\n",e);
	 return 0;
	 
//rode este codigo dentro da funçao main(void)
*/


}


	
