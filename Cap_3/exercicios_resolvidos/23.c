 /*
 23)Faça um programa que receba um número real, encontre e mostre: 
 a) a parte inteira desse número; 
 b) a parte fracionária desse número; 
 c) o arredondamento desse número. 
 */
#include <stdio.h>
#include <math.h>
int main(void)
{   int a=3;
    double num,int_part,frac_part,arredonda1,arredonda2;
    printf("Digite um numero real \n");
    scanf("%lf%*c",&num);
    int_part=((int) num);
    frac_part=(num-int_part);
    arredonda1=floor(num);
    arredonda2=ceil(num);
    printf("%.2f",(float) a); 
    printf("Pate inteira: %.f\n",int_part);
    printf("Parte fracionaria %f\n",frac_part);
    printf("Arredondado para baixo: %.f\n",arredonda1);
    printf("Arredondado para cima: %.f\n",arredonda2);
    return 0;

}