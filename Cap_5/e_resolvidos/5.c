/*
 Faça um programa que leia o número de termos e um valor positivo para X. Calcule e mostre o valor
da série a seguir:
*serie no livro*
*/
#define CONST 1
#include<math.h>
#include<stdio.h>

int  fat(int n)
{   
    int fat=1;
    while(n>0){ 
        fat*=n;
        n--;
    }
    return fat;


    
}




int main(){
    int j,k,x,numerador,denominador,posicao=1,vet_fat[6],termo,s=0,expoente;
    vet_fat[0]=fat(1);
    vet_fat[1]=fat(2);
    vet_fat[2]=fat(3);
    vet_fat[3]=fat(4);
    vet_fat[4]=vet_fat[2];
    vet_fat[5]=vet_fat[1];
    printf("Digite o valor de x\n");
    scanf("%d%*c",&x);
    printf("Digite o numero de termos");
    scanf("%d%*c",&termo);
    numerador=x;
    denominador=vet_fat[0];
    while(posicao<=termo)
    {
        if(posicao%2!=0){
            numerador=-x;
        }
        for(expoente=2;expoente<=termo;expoente++)
        {
            s+=pow(x,expoente);
        }

        for(k=0;k<6;k++)
        {
            denominador=vet_fat[j];
        }

        s=s/denominador;
        posicao++;
    }
    printf("S = %02d",s);
    return 0;
    
    

}





