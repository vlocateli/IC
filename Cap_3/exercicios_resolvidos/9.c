 //9)Faça um programa que calcule e mostre a área de um triângulo. sabe-se que: Área = (base * altura)/2. 
 #include <stdio.h>
 int main(void){
     float Area,base,height;
     printf("Calculo da are de um triangulo \n");
     printf("Digite o valor da base: \n");
     scanf("%f%*c",&base);
     printf("Digite o valor da altura: \n");
     scanf("%f%*c",&height);
     Area=(base*height)/2;
     printf("Area = %.2f",Area);
     return 0;
 }