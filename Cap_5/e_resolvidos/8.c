/*
Faça um programa que leia o número de termos, determine e mostre os valores de acordo com a série
a seguir:
//      1  2  3  4  5   6   7  8   9   10   11   12  13  14   15    
Série = 2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, 32, 567, 768...
*/
#include<stdio.h>
int main(){

    int num1=2,num2=7,num3=3,j,n_usr,i=0,k;
    printf("Digite o numero de termos");
    scanf("%d%*c",&n_usr);
    while(i<n_usr)
    {
        printf("%d\t",num1);
        num1*=2;
        printf("%d\t",num2);
        num2*=3;
        printf("%d\t",num3);
        num3*=4;

        i++;

    }
    printf("\n");
}