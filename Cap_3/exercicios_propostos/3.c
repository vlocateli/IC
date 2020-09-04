/*
3)Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar com validações. 
*/
#include <stdio.h>
int main(void)
{
    float num1,num2,res;
    printf("Digite o primeiro numero: \n");
    scanf("%f%*c",&num1);
    printf("Digite o segundo numero: \n");
    scanf("%f%*c",&num2);
    while (num2==0){
        printf("\a");
        printf("Nao eh possivel dividir por 0, por favor escolhar outro numero: \n");
        scanf("%lf%*c",&num2);
    }
    res=num1/num2;
    printf("O resultado eh %.2f",res);
    return 0;

}