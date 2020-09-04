#include <stdio.h>
int main ()
{
	int i,J;
	printf("Digite um numero\n");
	scanf("%d%*c",&i);
	switch (i)
	{
	case 1:
		printf("Numero escolhido: 1\n");
		break;
	case 2:
		printf("Numero escolhido: 2\n");
	case 3:
		printf("Numero escolhido: 3\n");
		break;
	case 4:
		printf("Numero escolhido: 4\n");
		break;
	case 5:
		printf("Numero escolhido: 5\n");
		break;
	case 6:
		printf("Numero escolhido: 6\n");
		break;
	case 7:
		printf("Numero escolhido: 7\n");
		break;
	case 8:
		printf("Numero escolhido: 8\n");
		break;
	case 9:
		printf("Numero escolhido: 9\n");
		break;
	default:
		printf("\a");
		printf("Nao foi escolhido nenhum numero de 0 a 9!");
		break;
	}
	getchar();
	return 0;
}