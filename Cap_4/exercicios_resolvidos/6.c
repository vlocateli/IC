 /*
 6)Faça um programa que receba um número inteiro e verifique se é par ou ímpar. 
 */
 
 #include <stdio.h>
 int main(void)
 {
     int num;
     printf("Digite um numero qualquer\n");
     scanf("%d%*c",&num);
     if (num%2==0)
        printf("Eh par");

     else
        printf("Eh impar");
    return 0;
 }