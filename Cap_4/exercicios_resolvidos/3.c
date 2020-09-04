/*
3)Faça um programa que receba dois números e mostre o maior.
*/
#include <stdio.h>
int main(void)
{
    int num1,num2;
    printf("Mostrar maior numero\n");
    printf("Digite o primeiro numero \n");
    scanf("%d%*c",&num1);
    printf("Digite o segudndo numero\n");
    scanf("%d%*c",&num2);
    if (num1<num2){
        printf("%d",num1);
    }
    else if(num1<num2){
        printf("%d",num2);
    }
    else{
        printf("Os numeros sao iguais\n");
    }
    return 0;
}