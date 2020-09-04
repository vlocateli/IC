 //4)Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%. 
 #include <stdio.h>
 #define AUMENTO (25.f/100.f)
 int main(void)
 {
    float salario_min_atual;
    printf("Digite o salario_min atual: \n");
    scanf("%f%*c",&salario_min_atual);
    salario_min_atual+=+(salario_min_atual*AUMENTO);
    printf("Seu salario_min, apos o aumento eh de R$ %.2f",salario_min_atual);
    return 0;
 }