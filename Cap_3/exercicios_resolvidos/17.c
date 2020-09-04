 /*
 17) Um trabalhador recebeu seu salário e o depositou em sua conta bancária.
  Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. 
  Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado. 
  cpmf= Uma simples transferência da conta corrente (por exemplo) para conta da poupança (até no mesmo banco) implica um custo de 0,38 % do valor transferido
  */
  #include <stdio.h>
  int main(void){
        float saldo,cheque1,cheque2,cpmf1,cpmf2;
        printf("Calculo do saldo atual\n");
        printf("Digite seu saldo atual \n");
        scanf("%f%*c",&saldo);
        printf("Digite o valor do cheque 1\n");
        scanf("%f%*c",&cheque1);
        printf("Digite o valor do cheque 2\n");
        scanf("%f%*c",&cheque2);
        cpmf1=cheque1*0.38f/100.f;
        cpmf2=cheque2*0.38f/100.f;
        saldo-=(cheque1+cheque2+cpmf1+cpmf2);
        printf("Saldo = R$ %.2f",saldo);
        return 0;
  }