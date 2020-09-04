 /*
 16)Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e mostre o salário a receber, seguindo estas regras: 
 a) a hora trabalhada vale a metade do salário mínimo. 
 b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada. 
 c) o imposto equivale a 3% do salário bruto. 
 d) o salário a receber equivale ao salário bruto menos o imposto. 
 */
#include<stdio.h>
int main(void){
float horas,salario_min_min,valor_hora,sal_bruto,imposto,sal_receber;
printf("Calculo de salario_min \n");
printf("Digite o salario_min minimo \n");
scanf("%f%*c",&salario_min_min);
printf("Digite o numero de horas trabalhadas \n");
scanf("%f%*c",&horas);
valor_hora=salario_min_min/2;
sal_bruto=valor_hora*horas;
imposto=3.0f/100.f*sal_bruto;
sal_receber=sal_bruto-imposto;
printf("salario_min a receber = %.2f",sal_receber);
return 0;
}
 