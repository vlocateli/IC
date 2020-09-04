/*
Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. 
Mostre, em seguida, os quatro números em ordem decrescente. Suponha que o usuário digitará quatro números diferentes. 
*/

#include <stdio.h>
int main(void)
{
    int num1,num2,num3,num4;
    printf("Digite 3 numeros em ordem crescente\n");
    scanf("%d%d%d%*c",&num1,&num2,&num3);
    printf("Digite um numero inteiro qualquer \n");
    scanf("%d%*c",&num4);
    if (num4<num3) // num4<num3<num2<num1
        printf("%d - %d - %d - %d",num4,num3,num2,num1);
    else if(num4<num2 && num4<num3) // num3<num4<num2<num1
        printf("%d / %d /  %d / %d",num3,num4,num2,num1);
    else if (num4<num1 && num4<num2) //  num3<num2<num4<num1
        printf("%d | %d | %d | %d",num3,num2,num4,num1);
    else //  num3<num2<num1<num4
        printf("%d %d %d %d",num3,num2,num1,num4);
    return 0;
}