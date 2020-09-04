/*
Faça um programa que monte os oito primeiros termos da sequência de Fibonacci.
0-1-1-2-3-5-8-13-21-34-55...
*/
int fib(int n){
    if (n==0)
    return 1;

    if(n==1)
    return 1;

    return fib(n-1)+fib(n-2);
    

}
#include<stdio.h>
int main(){
    int i,anterior=0,proximo=1,temp,cont=1;
    for(i=1;i<=8;i++){
        printf("fib %02d = %02d\t\n",i,anterior);
        temp=anterior;
        anterior=proximo;
        proximo=anterior+temp;
    }
    anterior=0;
    proximo=1;
    temp=0;
    printf("\n");
    do
    {   
        printf("fib %02d = %02d\n\t",cont,anterior);
        temp=anterior;
        anterior=proximo;
        proximo=anterior+temp;
        cont+=1;
    } while (cont<=8);
    


    

return 0;
}