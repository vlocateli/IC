/*22)Faça um programa que receba o salário base e o tempo de serviço de um funcionário. 
Calcule e mostre:
■ O imposto, conforme a tabela a seguir.


salario base                                                                % sobre salario base
< R$ 200,00                                                                     isento                                                                                                                                      8%  
Entre R$ 200,00 (inclusive) e R$ 450,00 (inclusive)                             3%
Entre R$ 450,00 e R$ 700,00                                                     8%
>= R$ 700,00                                                                    12%

A gratificação, de acordo com a tabela a seguir.

salario base                                            TEMPO DE SERVIÇO                            gratificação
Superior a R$ 500,00                                        Até 3 anos                                  20
      ''                                                    mais de 3 anos                              30


Até R$ 500,00                                               até 3 anos                                 23
    ''                                                     entre 3 e 6 anos                            35
    ''                                                     De 6 anos para cima                         33  


O salário líquido, ou seja, salário base menos imposto mais gratificação.
A categoria, que está na tabela a seguir.


                Salario Liquido                                                 Classificação
                até R$350,00                                                          A
                Entre R$350,00 e R$600,00                                             B
                De R$600,00 para cima                                                 C


*/
#include <stdio.h>
int main(void)
{
    float salario,tempo,imposto,gratificacao;
    printf("Digite seu salario\n");
    scanf("%f%*c",&salario);
    printf("Digite o tempo de serviço\n");
    scanf("%f%*c",&tempo);
    //calculo imposto
    if (salario<200.00f)
    imposto=0;
    else if(200.0f<= salario && salario <= 450.0f)
    imposto=0.03f;
    else if(450<salario && salario<700)
    imposto=0.08f;
    else 
    imposto=0.12f;
    //calculo gratificação
    if (salario>500 && tempo<=3)
    gratificacao=20;
    else if(salario>500 && tempo>3)
    gratificacao=30;
    else if(salario<=500 && tempo<=3)
    gratificacao=23;
    else if(salario<=500 && 3<=tempo && tempo<=6)
    gratificacao=35;
    else
    gratificacao=33;
    salario=(salario-(salario*imposto))+gratificacao;
    printf("Salario liquido R$%.2f\n",salario);
    if (salario<= 350)
    printf("Classificacao: A\n");
    else if(350<= salario && salario<=600)
    printf("Classificacao: B\n");
    else 
    printf("Classificacao: C\n");
    return 0;








}