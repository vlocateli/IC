/*
21)Faça um programa que receba:
■ o código do estado de origem da carga de um caminhão, supondo que a digitação do código do
estado seja sempre válida, isto é, um número inteiro entre 1 e 5;
■ o peso da carga do caminhão em toneladas;
■ o código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro
entre 10 e 40.

Tabelas:
COD. ESTADO             IMPOSTO                             codigo da carga             preço por kilo
    1                     35%                                  10 a 20                       100
    2                     25%                                  21 a 30                       250
    3                     15%                                  31 a 40                       340
    4                     5%                                   
    5                   Isento

Calcule e mostre:
■ o peso da carga do caminhão convertido em quilos;
■ o preço da carga do caminhão;
■ o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e de-
pende do estado de origem;
■ o valor total transportado pelo caminhão, preço da carga mais imposto.

*/
#include <stdio.h>
int main(void)
{
    int i,cod_carga;
    float peso,imposto,total;
    printf("Digite o codigo do estado de origem da carga do caminhao\n");
    scanf("%d%*c",&i);
    printf("Digite o peso da carga (em toneladas) \n");
    scanf("%f%*c",&peso);
    peso=peso*1000.f;
    printf("Digite o codigo da carga\n");
    scanf("%d%*c",&cod_carga);
    switch(i)
    {
        case 1:
        imposto=0.35f;
        break;

        case 2:
        imposto=0.25f;
        break;
        
        case 3:
        imposto=0.15f;
        break;

        case 4:
        imposto=0.5f;
        break;

        case 5:
        imposto=0.0f;
        break;

        default:
        printf("\a vc nao digitou um opcao valida, por favor digite uma opcao entre 1 e 5\n");
        break;
    }
    printf("Peso em KG = %.2f\n",peso);
    if (10<= cod_carga && cod_carga <= 20)
    total=peso*100.f;
    else if(21 <= cod_carga && cod_carga <= 30)
    total=peso*250.f;
    else if(31 <= cod_carga && cod_carga <= 40)
    total=peso*340.f;
    else 
    printf("Digite um codigo valido && rode o programa novamente!\n");

    printf("Preco da carga do caminhao: R$%.2f\n",total);
    printf("Valor do impsoto: R$%.2f\n",imposto*total);
    total+=(total*imposto);
    printf("Valor final (total carga + imposto) %.2f\n",total);
    return 0;
}