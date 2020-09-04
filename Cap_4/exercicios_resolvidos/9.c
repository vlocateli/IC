 /* 
 9)Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: DD/MM/AAAA – mês por extenso e hora:minuto. 
 */
#include <stdio.h>
#include<time.h>
int main(void)
{   time_t t;
    struct tm tm=*localtime(&t);
    int dia, mes, ano, hora, min, seg;
    struct tm *data_hora; 
    t=time(NULL);
    data_hora = localtime(&t);  
    dia = data_hora -> tm_mday;  
    mes = data_hora -> tm_mon + 1;  
    ano = data_hora -> tm_year + 1900;  
    hora = data_hora -> tm_hour;  
    min = data_hora -> tm_min;
    seg = data_hora -> tm_sec;
    printf("Data: %02d/%02d/%02d\n",dia,mes,ano);
    switch (mes)
    {
    case (1):
        printf("Janeiro\n");
        break;

    case (2):
        printf("Fevereiro\n");
        break;
    case(3):
        printf("Marco\n");
        break;
    case(4):
        printf("Abril\n");
        break;
    case(5):
        printf("Maio\n");
        break;
    case(6):
        printf("Junho\n");
        break;
    case(7):
        printf("Julho\n");
        break;
    case(8):
        printf("Agosto\n");
        break;
    case(9):
        printf("Setembro\n");
        break;
    case(10):
        printf("Outubro\n");
        break;
    case(11):
        printf("Novembro\n");
        break;
    case(12):
        printf("Dezembro\n");
        break;
    default:
        printf("\a");
        printf("Erro: O mes do sistema nao foi lido corretamente, certifique-se de que o mes segue o calendario gregoriano!\n");
        printf("Rode o programa novamente\n");
        break;
    }
    printf("%02d:%02d:%02d",hora,min,seg);  
    return 0;
}
 