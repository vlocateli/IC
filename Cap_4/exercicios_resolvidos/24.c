/*Faça um programa que receba o preço, o tipo (A — alimentação; L — limpeza; e V — vestuário) e a
refrigeração (S — produto que necessita de refrigeração; e N — produto que não necessita de refri-
geração) de um produto. Suponha que haverá apenas a digitação de dados válidos e, quando houver
digitação de letras, utilize maiúsculas. 
Calcule e mostre:
■ O valor adicional, de acordo com a tabela do exercicio && a tabela do imposto.
*/


#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    float imposto,preco,valor_add;
    char tipo,refri;
    printf("Digite o preco\n");
    scanf("%f%*c",&preco);
    printf("Digite o tipo\n");
    scanf("%c%*c",&tipo);
    printf("Digite a refrigeracao\n");
    scanf("%c%*c",&refri);
    
    if (refri=='N' && tipo =='A' && preco < 15)
    valor_add=2.0f;

    else if (refri=='N' && tipo =='A' && preco >= 15)
    valor_add=5.0f;

    else if (refri=='N' && tipo =='L' && preco < 10)
    valor_add=1.5f;

    else if (refri=='N' && tipo =='L' && preco >= 10)
    valor_add=2.5f;

    else if (refri=='N' && tipo =='V' && preco < 30)
    valor_add=3.0f;

    else if (refri=='N' && tipo =='V' && preco >= 30)
    valor_add=2.5f;

    else if(refri=='S' && tipo == 'A' )
    valor_add=8.0f;

    else if(refri=='S' && (tipo=='V' || tipo=='L') )
    valor_add=0.0f;

    else
    {
        printf("Um ou mais items foram digitado incorretamente!\n");
        printf("Rode o programa novamente!\a");
        printf("\a");
        exit(0);
    }
    
    if (preco<25)
    imposto=0.05f*preco;

    else 
    imposto=0.08f*preco;

    preco+=imposto;
    printf("Preco custo = %.2f\n",preco);
    preco+=valor_add;
    if(tipo!='A' && refri!='S')
    {
        printf("Novo preco = %.2f\n",preco-(preco*0.03f) );

    }

    else
    printf("Novo preco = %.2f\n",preco);

    if (preco<= 50.0f)
    printf("Classificacao: Barato\n");

    else if(50<preco && preco<100)
    printf("Classificacao: Normal\n");

    else
    printf("Classificacao: Caro");
    
    return 0;                 
}