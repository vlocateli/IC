/*
10)Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuário. cada data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o segundo, o mês e o terceiro, o ano.
*/
#include <stdio.h>
int main(void)
{
    int d1,m1,a1,d2,m2,a2;
    printf("Determina a data cronologicamente maior entre duas datas fornecidas pelo usuario\n");
    printf("Digite o dia, o mes e o ano\n");
    scanf("%d%d%d*c",&d1,&m1,&a1);
    printf("Digite a segunda data a ser comparada (fomrato: DD/MM/AAAA)\n");
    scanf("%d%d%d%*c",&d2,&m2,&a2);
    if (a1>a2)
        printf("A data maior eh %02d/%02d/%02d",d2,m2,a2);
    else if (a2>a1)
        printf("A data maior eh %02d/%02d/%02d",d1,m1,a1);
    else if (m1>m2)
        printf("A data maior eh %02d/%02d/%02d",d2,m2,a2);
    else if(m2>m1)
        printf("A data maior eh %02d/%02d/%02d",d1,m1,a1);
    else if(d1>d2)
        printf("A data maior eh %02d/%02d/%02d",d2,m2,a2);
    else if(d2>d1)
        printf("A data maior eh %02d/%02d/%02d",d1,m1,a1);
    else
        printf("As datas sao iguais\n");
    return  0 ;

}