#include <stdio.h>

int main(void)

{

float HT, VH, PD, TD, SB, SL;
printf ("quantas horas de trabalho? "); scanf("%f", &HT);
printf ("qual o valor da hora?  "); scanf("%f", &VH);
printf("qual o percentual de desconto?  "); scanf("%f", &PD);
SB = HT * VH;
TD = (PD/100)*SB;
SL = SB-TD;
printf("salário bruto....:  %.2f\n", SB);
printf("desconto.........:  %.2f\n", TD);
printf("salario liquido..:  %.2f\n", SL);
return 0;
}
