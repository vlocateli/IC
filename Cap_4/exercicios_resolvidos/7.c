/*
7)Faça um programa que receba quatro valores: I, A, B e C. 
Desses valores, I é inteiro e positivo, A, B e C são reais. Escreva os números A, B e C obedecendo à tabela a seguir. Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados sejam diferentes um do outro.
_______________________________________________________________
| VALOR DE I  |  Forma a escrever                              |                    
|    1        |   A, B e C em ordem crescente.                 |
|    2        |   A, B e C em ordem decrescente.               |            
|    3        |   O maior fica entre os outros dois números.   |
|_____________|_______________________________________________ |
*/
#include<stdio.h>
int main(void)
{   
    int i;
    float A,B,C;
    printf("Digite 3 numeros reais\n");
    scanf("%f%f%f%*c",&A,&B,&C);
    printf("Digite um inteiro i, entre 1 e 3 (1<= i < = 3)\n");
    scanf("%d%*c",&i);
    if (i==1)
        {
            if (A>B && B>C)
            printf("%f  %f  %f",C,B,A); 

            else if (B>A && A>C)
            printf("%f %f %f",C,A,B); 

            else if (C>A && A>B)
            printf("%f %f %f",B,A,C);

            else if (B>C && C>A) 
            printf("%f %f %f",A,C,B);

            else if (C>B && B>A) 
            printf("%f %f %f",A,B,C);

            else //A>C>B
            printf("%f %f %f",B,C,A);
        }
    else if (i==2)
    {
            if (A<B && B<C)
            printf("%f  %f  %f",C,B,A); 

            else if (B<A && A<C)
            printf("%f %f %f",C,A,B); 

            else if (C<A && A<B)
            printf("%f %f %f",B,A,C);

            else if (B<C && C<A) 
            printf("%f %f %f",A,C,B);

            else if (C<B && B<A) 
            printf("%f %f %f",A,B,C);

            else //A<C<B
            printf("%f %f %f",B,C,A);
    }
    else if (i==3)
    {
            //caso 1 , A = maior
            if (A>B && A>C)
            printf("%f %f %f",B,A,C);
            //caso 2 , B = maior
            else if (B>A && B>C)
            printf("%f %f %f",A,B,C); 
            //caso 3 , B = maior
            else // C>A &&  C>B
            printf("%f %f %f",A,C,B);     
    }
    else {
        printf("Numero i invalido! \a");
        printf("Por favor, rode o programa novamente\n");
         }  
    return 0;

}
    


