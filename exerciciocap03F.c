#include <stdio.h>

int main(void)
{

int A,B,X;

printf("TROCA DE VALORES NAS VARIAVEIS A E B\n");
printf("Informe o valor de A...:  "), scanf("%d", &A);
printf("Informe o valor de B...:  "), scanf("%d", &B);


X=A;
A=B;
B=X;

printf("o novo valor de A é...: %d\n", A);
printf("o novo valor de B é...: %d\n", B);

return 0;

}
