/*
 Faça um programa que leia o número de termos e um valor positivo para X. Calcule e mostre o valor
da série a seguir:
*serie no livro*
*/
#define CONST 1
#include<math.h>
#include<stdio.h>

int fat(int n)
{   
    int fat=1;
    while(n>0){ 
        fat*=n;
        n--;
    }
    return fat;


    
}




int main(){
    int x,pos=1,vet_fat[6];
    vet_fat[0]=fat(1);
    vet_fat[1]=fat(2);
    vet_fat[2]=fat(3);
    vet_fat[3]=fat(4);
    vet_fat[4]=fat(2);
    vet_fat[4]=fat(1);
    printf("Digite o valor de x\n");
    scanf("%d%*c",&x);
    printf("%02d",fat(x));

}





