/*11)Faça um programa que receba um número positivo e maior que zero, calcule e mostre: 
a) o número digitado ao quadrado; 
b) o número digitado ao cubo; 
c) a raiz quadrada do número digitado; 
d) a raiz cúbica do número digitado.
*/
#include<stdio.h>
#include<math.h>
int main(void){
    double num,quad,cubo,raiz_cubo;
    printf("Digite um numero positivo e maior que 0\n");
    scanf("%lf%*c",&num);
   quad=pow(num,2);
   cubo=pow(num,3);
   raiz_cubo=pow(num,1.0/3.0);
   printf("Quadrado = %.2f\n",quad);
   printf("Cubo = %.2f\n",cubo);
   printf("Raiz cubica de %.2f = %.2f\n",num,raiz_cubo);
   return 0;
}