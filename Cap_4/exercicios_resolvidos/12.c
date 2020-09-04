/*
Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual
e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.
CÓDIGO      CARGO       PERCENTUAL
1       Escriturário       50%
2       Secretário         35%
3       Caixa              20%
4       Gerente            10%
5       Diretor         Não tem aumento

*/

#include <stdio.h>
int main(void)
{
    int cod;
    float sal_atual,sal_novo;
    printf("Digite o código do seu cargo\n");
    scanf("%d%*c",&cod);
    printf("Digite seu salario atual\n");
    scanf("%f%*c",&sal_atual);
    switch (cod)
    {
    case 1:
        printf("Cargo: Escrituario\n");
        sal_novo=sal_atual+(sal_atual*50.f/100.f);
        break;
    case 2:
        printf("Cargo: Secretario\n");
        sal_novo=sal_atual+(sal_atual*35.f/100.f);
        break;
    case 3:
        printf("Cargo: Caixa\n");
        sal_novo=sal_atual+(sal_atual*20.f/100.f);
        break;
    case 4:
        printf("Cargo: Gerente\n");
        sal_novo=sal_atual+(sal_atual*10.f/100.f);
        break;
    case 5:
        printf("Cargo: Gerente\n");
        sal_novo=sal_atual;
        break;
    default:
        printf("cargo inexistente\n");
        printf("Digite uma opcao de 1 a 5\n");
        break;
    }
    printf("Seu salario novo eh R$%.2f",sal_novo);
    return 0;
}