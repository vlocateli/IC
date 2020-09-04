/*
4- Faça um programa que receba três números e mostre o maior.
*/
#include<stdio.h>
int main(void){
    int vetor[3]={0,0,0},num=0,j,maior=0;
    for (j=0;j<3;j++){
        printf("Digite %02d numero\n",j+1);
        scanf("%d%*c",&num);
        vetor[j]=num;
        if( vetor[j]>=vetor[j+1] )
            maior=vetor[j];
        else
            maior=vetor[j+1];
    }
    printf("Maior = %02d",maior);
    
    return 0;
    }
