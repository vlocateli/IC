/*
18)Pedro comprou um saco de ração com peso em quilos. 
Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas. 
A quantidade diária de ração fornecida para cada gato é sempre a mesma. 
Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no saco após cinco dias. 
*/
#include <stdio.h>
int main(void){
    float j=0.f,cont=0.f,peso_saco,racao_gato1,racao_gato2;
    printf("Calculo de quanto restara de racao\n");
    printf("Digite o o peso do saco \n");
    scanf("%f%*c",&peso_saco);

    printf("Digite a quantidade de racao do gato 1 \n");
    scanf("%f%*c",&racao_gato1);
    printf("Digite a quantidade de racao do gato 2 \n");
    scanf("%f%*c",&racao_gato2);
    racao_gato1=racao_gato1/1000.f;
    racao_gato2=racao_gato2/1000.f;
    //peso_saco-=5*(racao_gato1+racao_gato2); //solucao proposta
    while (cont<5){
        cont+=1;
        peso_saco-=(racao_gato1+racao_gato2); //solução com while
    }                                               
    /*
    for (j=0;j<5;j++){
        peso_saco-=(racao_gato1+racao_gato2);   //solução com for                                         
    }
    */
    printf("Resta %.2f kg de racao",peso_saco);
    return 0;
}   