/*
Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas, 
calcule e mostre o salário a receber, de acordo com as regras a seguir: 
a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale 1/4 do salário mínimo; 
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada; 
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra; 
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras. 
*/
#include <stdio.h>
int main(void)
{
    float valor_hora,valor_h_extra,horas_trabalhadas,sal_min,horas_extras,sal_bruto,qtd_extra,sal_total;
    printf("Digite o salario minimo\n");
    scanf("%f%*c",&sal_min);
    printf("Digite o numero de horas trabalhadas \n");
    scanf("%f%*c",&horas_trabalhadas);
    printf("Digite o numero de horas extras: \n");
    scanf("%f%*c",&horas_extras);
    valor_hora=sal_min/8.0f;
    valor_h_extra=sal_min/4.0f;
    sal_bruto=valor_hora*horas_trabalhadas;
    qtd_extra=horas_extras*valor_h_extra;
    sal_total=sal_bruto+qtd_extra;
    printf("Salario a receber: R$%.2f",sal_total);
    return 0;
}
 