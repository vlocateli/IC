/*
16)Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério: 
o produto poderá ter seu preço aumentado ou diminuído. Para o preço ser alterado, o produto deve preencher
pelo menos um dos requisitos a seguir:
VENDA MEDIA MENSAL          PREÇO ATUAL                     % DE AUMENTO            % DE DIMINUIÇÃO
< 500                       < R$ 30,00                      10                          -
>= 500 e < 1.200            >= R$ 30,00 e < R$ 80,0         15                          -
>= 1.200                    >= R$ 80,00                     -                           20
Faça um programa que receba o preço atual e a venda média mensal do produto, calcule e mostre o
novo preço.
*/
#include <stdio.h>
int main(void)
{
    float preco;
    int venda;
    printf("Digite o preco do produto\n");
    scanf("%f%*c",&preco);
    printf("Digite o numero de vendas medio mensal\n");
    scanf("%d%*c",&venda);
    if (venda<500 && preco<30)
    preco=(preco*1.10);
    else if((venda>=500 && venda < 1200) || (preco>=30 && preco<80))
    preco=(preco*1.15);
    else 
    preco-=(preco*0.20);
    printf("Novo preco: R$ %.2f",preco);
    return 0;
}