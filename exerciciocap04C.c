#include <stdio.h>



int main (void)

{
	float N1,N2,N3,N4,MD;

	printf("entre com N1\n");
	scanf("%f",&N1);
	printf("entre com N2\n");
	scanf("%f",&N2);
	printf("entre com N3\n");
	scanf("%f",&N3);
	printf("entre com N4\n");
	scanf("%f",&N4);

	MD = (N1+N2+N3+N4)/4;
	
	
	if (MD <= 5)

	
	printf("O aluno foi reprovado média menor que 5!, média =  ");
	 else
	
	printf("O aluno foi aprovado, Parabens! Média =  ");
	printf("%5.2f\n", MD);
	
	
	
	return 0;

}
