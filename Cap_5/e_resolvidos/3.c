/*
 Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor.
*/
#include<stdio.h>
int main(){
	int N,num,fat,i,j;
	printf("Digite o valor de N\n");
	scanf("%d%*c",&N);
	for (i=1;i<=N;i++){
		fat=1;
		printf("Digite o valor de numero\n");
		scanf("%d%*c",&num);
		for(j=1;j<=num;j++){
			fat=fat*j;
		}
		printf("fat  = %02d\n",fat);


	}
return 0;
}

