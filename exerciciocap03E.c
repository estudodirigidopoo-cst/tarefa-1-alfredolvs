#include <stdio.h>

float main(void)
{

float R,A,V;

printf("Cálculo do volume de uma lata de óleo\n");
printf("Informe o raio da lata...:  "), scanf("%f", &R);
printf("Informe a altura da lata.:  "), scanf("%f", &A);


V = 3.14159 * R * R * A;
printf("O volume da lata de óleo é.......: %f\n ", V);


return 0;

}
