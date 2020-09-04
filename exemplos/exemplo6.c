/*
Testando os tipos de variaveis em C
  Type  Range of values  Size
char => −128 a 127 [8 bits] 
unsigned char => 0 a 255 [8 bits] 
int => −32.768 a 32.767 [16 bits] 
unsigned int => 0 a 65.535 [16 bits] 
short int => −32.768 a 32.767 [16 bits] 
long => −2.147.483.648 a 2.147.483.647 [32 bits] 
unsigned long => 0 a 4.294.967.295 [32 bits]
float => 3.4 × 10–38 a 3.4 × 1038 [32 bits] 
double => 1.7 × 10–308 a 1.7 × 10308 [64 bits] 
long double => 3.4 × 10–4932 a 1.1 × 104932 [80 bits]

*/

#include <stdio.h>
int main ()
{   int a=6,b=8;
    float d=1.5f,k=1.0f;
    char c='a';
    printf("%d\n%d\n",a,b);
    printf("%7.2f\n",d);
    printf("%c\n",c);
    printf("%.d %% %.d = %d",a,b,a%b);
    return 0;
}


