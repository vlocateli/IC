/*
4)Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário digitará três números diferentes. 
*/
#include<stdio.h>
int main(void){
    int num1,num2,num3;
    printf("Mostrar em ordem crescente 3 numeros\n");
    printf("Digite 3 numeros\n");
    scanf("%d%d%d%*c",&num1,&num2,&num3);
   // existem 6 possibilidades = 3!
    if (num1<num2 && num2 <num3)
    {
        printf("%d - %d - %d",num1,num2,num3); 
    }
    else if (num1 <num3 && num3 <num2)
    {
        printf("%d - %d - %d",num1,num3,num2); 
    }
    else if (num2<num1 && num1<num3 )
    {
        printf("%d - %d - %d",num2,num1,num3); 
    }
    else if(num2<num3 && num3<num1) 
    {
        printf("%d - %d  - %d",num2,num3,num1); 
    }
    else if(num3<num2 && num2<num1)
    {
        printf("%d - %d - %d",num3,num2,num1); 
    }
    else
    {   // num3<num1 && num1<num2
        printf("%d - %d - %d",num3,num1,num2); 
    }
    return 0;
}