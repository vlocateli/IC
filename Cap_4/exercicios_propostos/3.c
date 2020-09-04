//3-Faça um programa que receba dois números e mostre o menor.

#include<stdio.h>
int main(void){
    int num1,num2;

    printf("Digite um numero\n");
    scanf("%d%*C",&num1);
    printf("Digite um numero\n");
    scanf("%d%*C",&num2);
    if (num1>num2)
        printf("%02d\n",num2);

    else
        printf("%02d\n",num1);

    return 0;
    


}
