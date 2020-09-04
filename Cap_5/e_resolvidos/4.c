/*
 Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vítimas.
Deseja-se saber:
a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
b) qual é a média de veículos nas cinco cidades juntas;
c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.
*/
#include<stdio.h>
#include <string.h>
int main(){
	char vc[5],vc_ultima[5];
	int k,soma=0,num_c=0,num_a=0,j=0,maior=0,temp_num=0;
	for (j=0;j<=2;j++){
		printf("Digite a cidade\n");
		scanf("%s%*c",vc);
		printf("Digite o numero de veiculo de passio\n");
		scanf("%d%*c",&num_c);
		printf("Digite o numero de acidentes\n");
		scanf("%d%*c",&num_a);

		if (num_a>maior){
			temp_num=maior;
			maior=num_a;
		}
		maior=num_a;
		soma+=(maior+temp_num);
}
printf("Media dos acidentes = %02d\n",soma/5);
printf("Maior numero de acidentes %02d\n",maior);
printf("Menor numero de acidentes %02d\n",temp_num);
printf("Cidade com mais acidentes %s",vc_ultima);



return 0;
}








		




