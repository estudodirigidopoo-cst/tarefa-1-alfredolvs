#include <stdio.h>

int main(void)
{

int a,b,c,d,s1,s2,s3,s4,s5,s6,m1,m2,m3,m4,m5,m6;

printf("entre com o valor de a: "); scanf("%d", &a);
printf("entre com o valor de b: "); scanf("%d\n", &b);
printf("entre com o valor de c: "); scanf("%d\n", &c);
printf("entre com o valor de d: "); scanf("%d\n", &d);

s1 = a + b;
printf("O resultado da primeira soma é...: %d\n", s1);
s2 = a + c;
printf("O resultado da segunda soma é...: %d\n", s2);
s3 = a + d;
printf("O resultado da terceira soma é...: %d\n", s3);
s4 = b + c;
printf("O resultado da quarta soma é...: %d\n", s4);
s5 = b + d;
printf("O resultado da quinta soma é...: %d\n", s5);
s6 = c + d;
printf("O resultado da sexta soma é...: %d\n", s6);

m1 = a * b;
printf("O resultado da primeira multiplicação é...: %d\n", m1);
m2 = a * c;
printf("O resultado da segunda multiplicação é...: %d\n", m2);
m3 = a * d;
printf("O resultado da terceira multiplicação é...: %d\n", m3);
m4 = b * c;
printf("O resultado da quarta multiplicação é...: %d\n", m4);
m5 = b * d;
printf("O resultado da quinta multiplicação é...: %d\n", m5);
m6 = c * d;
printf("O resultado da sexta multiplicação é...: %d\n", m6);

return 0;
}
