 /*12)Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário. 
 */
#include <stdio.h>
int main(void)
{
    int cont=0,num;
    printf("Digite um numero: \n");
    scanf("%d%*c",&num);
    while (cont<=10)
    {
        printf("%d X %d = %d\n",num,cont,num*cont);
        cont+=1;
    }

}
