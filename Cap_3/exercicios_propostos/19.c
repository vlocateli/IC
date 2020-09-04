//sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W de potência. 
//Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada. 
#include <stdio.h>
int main(void){
    int lado,area,pot;
    printf("Digite a dimensoes do comodo: \n");
    scanf("%d%*c",&lado);
    area=lado*lado;
    pot=lado*18;
    printf("Area = %d\n",area);
    printf("Potencia de iluminacao necessaria: %d \n",pot);
    return 0;
}