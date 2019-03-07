#include <stdio.h>

float main(void)
{

float F,C;

printf(".....Conversão de valores em temperatura de CELSIUS PARA FAHRENHEIT.....\n");
printf("Informe a temperatura em Celsius............:  "), scanf("%f", &C);


F = (9 * C + 160)/5;
printf("O valor da temperatura em Fahrenheit é.......: %f\n ", F);


return 0;

}
