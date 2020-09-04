//14)Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: a) a idade dessa pessoa; b) quantos anos ela terá em 2050. 
#include <stdio.h>
int main(void){
    int nascimento,atual;
    printf("Digite o ano de nascimento\n");
    scanf("%f%*c",&nascimento);
    printf("Digite o ano atual: \n");
    scanf("%f%*c",&atual);
    printf("Idade = %f\n",atual-nascimento);
    printf("Em 2050, vc tera %f anos\n",2050-nascimento);
    return 0;
}