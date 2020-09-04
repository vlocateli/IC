 /* 15) O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre: 
 a) o valor correspondente ao lucro do distribuidor; 
 b) o valor correspondente aos impostos; 
 c) o preço final do veículo. 
 */
#include <stdio.h>
int main(void){
    float preco_fabrica,preco_final,percentual_dist,percentual_imposto;
    printf("Calculo preco de carro\n");
    printf("Digite o preco de fabrica\n");
    scanf("%f%*c",&preco_fabrica);
    printf("Digite o percentual de lucro do distribuidor: \n");
    scanf("%f%*c",&percentual_dist);
    printf("Digite o percentual de impostos: \n");
    scanf("%f%*c",&percentual_imposto);
    percentual_dist=percentual_dist/100.f;
    percentual_imposto=percentual_imposto/100.f;
    preco_final=preco_fabrica+(percentual_dist*preco_fabrica)+(preco_fabrica*percentual_imposto);
    printf("Valor correspondente ao lucro do distribuidor \n");
    printf("%.2f\n",preco_fabrica*percentual_dist);
    printf("Valor correpondente aos impostos: \n");
    printf("%.2f\n",preco_fabrica*percentual_imposto);
    printf("Preco final: %.2f",preco_final);
    return 0;

}
 