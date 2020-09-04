#include<stdio.h>
//Calcular media aritimetica
/*
Faça um algoritmo para calcular a média aritmética entre duas notas de um aluno e mostrar sua situação, que pode ser aprovado ou reprovado. 
*/
int main ()
{

    float nota1,nota2,nota3,res_media;
    printf("Digite a nota 1: \n");
    scanf("%f%*c",&nota1);
    printf("Digite a nota 2: \n");
    scanf("%f%*c",&nota2);
    printf("Digite a nota 3: \n");
    scanf("%f%*c",&nota3);
    res_media=(nota1+nota2+nota3)/3;
    printf("%.2f\n",res_media);
    if (res_media>=7.0f)
    {
        printf("Aluno aprovado\n");
        
    }
    else
    {   
        printf("Aluno reprovado\n");
    }
    return 0;
}