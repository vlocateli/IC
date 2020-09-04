 //Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. 
 #include <stdio.h>
 #include<math.h>
 int main(void)
 {
     double cat1,cat2,hipo;
     printf("Digite o valor do cateto 1: \n");
     scanf("%lf%*c",&cat1);
     printf("Digite o valor do cateto 2: \n");
     scanf("%lf%*c",&cat2);
    hipo=sqrt(pow(cat1,2.0)+pow(cat2,2.0));
    printf("O valor da hipotenusa eh de: %.2f",hipo);
    return 0;

 }