#include <stdio.h>

int main(void)
{

int tg,vm,d,comb;

printf(".....Cálculo de quantidade de combustivel em uma viagem de carro....\n");
printf("Informe o tempo gasto na viagem em horas...:  "), scanf("%d", &tg);
printf("Informe a velocidade média em km/h..:   "), scanf("%d", &vm);

d = tg * vm;
printf("A distancia percorrida foi de.......: %d\n ", d);

comb = d / 12;
printf("A quantidade de combustível em litros para a distancia percorrida é de:   %d\n", comb);
return 0;

}
