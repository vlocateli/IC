/*
23)Faça um programa que receba o valor do salário mínimo, o turno de trabalho (M — matutino; V
— vespertino; ou N — noturno), a categoria (O — operário; G — gerente) e o número de horas tra-
balhadas no mês de um funcionário. Suponha a digitação apenas de dados válidos e, quando houver
digitação de letras, utilize maiúsculas. 
■O coeficiente do salário, de acordo com a tabela a seguir.Calcule e mostre:

Turno de Trabalho                   |             Valor do coeficiente                  |
M - Matutino                        |               0.10f do salario min                |
V - Vespertino                      |               0.15f do salario min                |
N - Noturno                         |               0.12f do salario min                |
----------------------------------------------------------------------------------------
*-O valor do salário bruto, ou seja, o número de horas trabalhadas multiplicado pelo valor do coe-
ficiente do salário.

*-O imposto, de acordo com a tabela a seguir.

Categoria   |  Salario bruto  | Imposto sobre o salario bruto             |  
O-operario  |   >=R$300       |             5%                            |           
''          |   <R$300        |             3%                            |  
G-gerente   |   >=R$400       |             6%                            |          
''          |    <R$400       |             4%                            |                  
--------------------------------------------------------------------------

A gratificação, de acordo com as regras a seguir.
Se o funcionário preencher todos os requisitos a seguir, sua gratificação será de
R$ 50,00; caso contrário, será de R$ 30,00. Os requisitos são:
Turno: Noturno
Número de horas trabalhadas: Superior a 80 horas
■ O auxílio alimentação, de acordo com as seguintes regras.
Se o funcionário preencher algum dos requisitos a seguir, seu auxílio alimentação será de um terço
do seu salário bruto; caso contrário, será de metade do seu salário bruto. 
Os requisitos são:
Categoria: Operário
Coeficiente do salário: < = 25

■ O salário líquido, ou seja, salário bruto menos imposto mais gratificação mais auxílio alimentação.
■ A classificação, de acordo com a tabela a seguir:

Salario Liquido             |       Mensagem
Menor que R$350             |      Mal remunerado
Entre R$350 e R$600         |      Normal
Maior que R$600             |      Bem remunerado
----------------------------------------------------


*/
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char turno,cat; // turno de trabalho &&  categoria
    float sal,horas,sal_min,imposto,valor_hora,grat,alimentacao;
    printf("Digite o salario minimo\n");
    scanf("%f%*c",&sal_min);
    printf("Digite o numero de horas trabalhadas\n");
    scanf("%f%*c",&horas);
    printf("Digite o turno do trabalho\n");
    scanf("%c%*c",&turno);
    printf("Digite a categoria\n");
    scanf("%c%*c",&cat);
    switch(turno){
    
    case 'M':
    valor_hora=0.10f*sal_min;
    break;
    
    case 'V':
    valor_hora=0.15f*sal_min;;
    break;
    
    case 'N':
    valor_hora=0.12f*sal_min;;
    break;
    
    }

    sal=valor_hora*horas;
    
    switch (cat){
    case 'O':

        if (sal>=300){
            imposto=0.05f;
            break;
        }
        else {
            imposto=0.03f;
            break;
        }

    case 'G':

        if (sal>=400){
            imposto=0.06f;
            break;
        }
        else
        {
            imposto=0.04f;
            break;
        }

    default:
        printf("Uma ou mais entradas estao incorretas, por favor rode o programa novamente!\n");
        printf("\a");
        exit(0);
        break;
    }
    printf("Valor do coeficiente:   R$%.2f\n",valor_hora);
    printf("Salario bruto R$%.2f\n",sal);
    printf("Imposto R$%.2f\n",imposto*sal);
    if (turno=='N' && horas>80)
    grat=50;
    else
    grat=30;

    if (cat='0' || valor_hora<=25)
    alimentacao=sal/3.0f;
    else
    alimentacao=sal/2.0f;
    sal=sal-(sal*imposto)+(grat+alimentacao);
    printf("Salario liquido %.2f\n",sal);
    
    if (sal<350)
    printf("Mal remunerado\n");

    else if(350<= sal && sal<=600)
    printf("Normal\n");

    else
    printf("Bem remunerado\n");


    return 0;

}