/*Faça um programa que receba duas notas de seis alunos. Calcule e mostre:
■ ■ a média aritmética das duas notas de cada aluno; e
■ ■ a mensagem que está na tabela a seguir:
■ ■o total de alunos aprovados;
■ ■o total de alunos de exame;
■ ■o total de alunos reprovados;
■ ■a média da classe.
*/
#include<stdio.h>
int main(){
    float n1,n2,j,media=0,alunos_aprov=0,alunos_exame=0,alunos_reprovado=0,media_sala=0;
    for(j=0;j<2;j++){
        printf("Digite a n1\n");
        scanf("%f%*c",&n1);
        printf("Digite a n2\n");
        scanf("%f%*c",&n2);
        media+=(n1+n2)/2.0f;
        printf("Media = %.2f\n",media);
        if(media<=3){
        printf("Reprovado\n");
        alunos_reprovado+=1;
        }

        else if(3<=media && media<=7){
            printf("Exame\n");
            alunos_exame+=1;
        }

        else
        {
            printf("Aprovado\n");
            alunos_reprovado+=1;
        }
        media_sala+=(media);
        media=0;
        
    }
    media=media/2.0f;
    printf("MEDIA DA SALA %.2f\n ",media_sala/2.0f);
    return 0;
}