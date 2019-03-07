#include <stdio.h>

float main(void)
{

float F,C;

printf(".....Conversão de valores em temperatura de FAHRENHEIT PARA CELSIUS.....\n");
printf("Informe a temperatura em Fahrenheit.......:  "), scanf("%f", &F);


C = ((F - 32) * 5)/9;
printf("O valor da temperatura em Celsius é.......: %f\n ", C);


return 0;

}
