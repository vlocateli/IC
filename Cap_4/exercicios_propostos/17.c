/*
 Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.
*/
#include<stdio.h>
int main(void){
  int senha;
  printf("Digite a senha\n");
  scanf("%d%*c",&senha);
  while (senha!=4531){
    printf("Acesso Negado\a\n");
    printf("Digite a senha\n");
    scanf("%d%*c",&senha);
}
printf("Acesso permitido\n Bem-vindo\n");
return 0;
  }

