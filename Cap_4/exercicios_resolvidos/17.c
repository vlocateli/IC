/*
17)Faça um programa para resolver equações do 2 o grau.
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c,delta,raiz,x,x1,x2;
    printf("Digite os valores de A,B,C\n");
    scanf("%lf%lf%lf%*c",&a,&b,&c);
    delta=(pow(b,2.0)-4.0*a*c);
    if (delta<0)
    {
    printf("Delta  = %.2f\n",delta);
    printf("Nao existem raizes reais!\n");
    }
    else if(delta==0.00)
    {
    printf("Delta  = %.2f\n",delta);
    x=-b/(2*a);
    printf("A raiz eh igual a %.2f",x);
    }
    else
    {
    printf("Delta  = %.2f\n",delta);
    raiz=sqrt(delta);
    x1=(-b+raiz)/(2*a);
    x2=(-b-raiz)/(2*a);
    printf("As raizes sao %.2f && %.2f",x1,x2);
    }
    return 0;
    
}