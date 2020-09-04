/*
Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por vários países e precisa converter seu dinheiro em dólares, 
euro e libra esterlina. sabe-se que a cotação do dólar é de R$ 5,23; do euro, de R$ 6,10; e da libra esterlina, de R$ 6,69. O programa deve fazer as conversões e mostrá-las. 
*/
#include <stdio.h>
int main(void)
{   
    float qtd_din;
    printf("Digite a quantidade de dinheiro a ser levada \n");
    scanf("%f%*c",&qtd_din);
    printf("Conversao em USD =  %.2f\n",qtd_din/5.23f);
    printf("Conversao em GBP =  %.2f\n",qtd_din/6.69f);
    printf("Conversao em EUR =  %.2f\n",qtd_din/6.10f);
    return 0;
}