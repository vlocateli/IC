/*
15)Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, o número
de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule e mostre o salário
a receber do funcionário de acordo com as regras a seguir:
*-O valor da hora trabalhada é igual a 1/5 do salário mínimo.
*-O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora traba-
lhada.
*-Para cada dependente, acrescentar R$ 32,00.
*-Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%.
*-O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor das horas
extras.
*-Calcular o valor do imposto de renda retido na fonte de acordo com a tabela a seguir:
IRFF        SALARIO BRUTO
Isento      Inferior a R$ 200,00
10%         De R$ 200,00 até R$ 500,00         
20%         Superior a R$ 500,00

O salário líquido é igual ao salário bruto menos IRRF.
A gratificação é de acordo com a tabela a seguir:
sALário Líquido                     GRATIFICAÇÃO
Até R$ 350,00                       R$ 100,00
Superior a R$ 350,00                R$ 50,00

O salário a receber do funcionário é igual ao salário líquido mais a gratificação.

*/
#include <stdio.h>
int main (void)
{   
    float sal_liquido,imposto,sal_bruto,horas,dependentes,horas_extra,sal_min,valor_hora,valor_extra,sal_mes;
    printf("Digite o salario minimo\n");
    scanf("%f%*c",&sal_min);
    printf("Digite o numero de horas trabalhadas \n");
    scanf("%f%*c",&horas);
    printf("Digite o numero de dependentes \n");
    scanf("%f%*c",&dependentes);
    printf("Digite o numero de horas extras trabalhadas\n");
    scanf("%f%*c",&horas_extra);
    valor_hora=sal_min/5;
    sal_mes=valor_hora*horas;
    dependentes=dependentes*32.0f;
    valor_extra=valor_hora*1.50f;
    horas_extra=horas_extra*valor_extra;
    sal_bruto=sal_mes+dependentes+horas_extra;
    if (sal_bruto<=500)
    imposto=0;
    else if(200<= sal_bruto && sal_bruto<=500)
    imposto=0.10f*sal_bruto;
    else
    imposto=0.20f*sal_bruto;
    sal_liquido=sal_bruto-imposto;
    if (sal_liquido<=350.0f)
    sal_liquido+=100.0f;
    else
    sal_liquido+=50.0f;
    printf("Salario a receber: %.2f",sal_liquido);
    return 0;
}

