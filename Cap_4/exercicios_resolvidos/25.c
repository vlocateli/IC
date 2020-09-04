/*Faça um programa que receba a medida de um ângulo em graus. Calcule e mostre o quadrante em que
se localiza esse ângulo. Considere os quadrantes da trigonometria e, para ângulos maiores que 360o ou
menores que −360o, reduzi-los, mostrando também o número de q_voltas e o sentido da volta (horário
ou anti-horário).
*/
#include <stdio.h>
#include<math.h>
int main(void)

{   
    int quad,q_voltas,voltas;
    float angulo,angulo_corresponde;
    printf("Digite o valor do angulo em graus\n");
    scanf("%f%*c",&angulo);
    if (angulo<-360 || angulo>360)
    {
        q_voltas=angulo/360;
        angulo=angulo-(q_voltas*360);
        printf("Numero de q_voltas eh %02d",q_voltas);
    }
    
    else 
    
    {
    if(0==angulo || angulo==90 || angulo==180 || angulo==270 || angulo==360)
    {
    printf("O angulo esta em cima de algum dos eixos\n");
    
    }

    else if ( (0<angulo && angulo<90) || (-360<angulo && angulo<-270) )
    quad=1;

    else if( (90<angulo && angulo<180) || (-270<angulo && angulo<-180) )
    quad=2;

    else if( (180<angulo && angulo<270) || (-180<angulo && angulo<-90) )
    quad=3;

    else if ( (270<=angulo && angulo<=360) || (-90<angulo && angulo<0) )
    quad=4;
    }
    printf("Quadrante = %02d\n",quad);
    if (angulo>0)
    printf("Sentido positivo\n");

    else 
    printf("Sentido negativo\n");


    return 0;

}