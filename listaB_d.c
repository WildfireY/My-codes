#include <stdio.h>
/*d) Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A passe a possuir
o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores após a efetivação
do processamento da troca. */
void main()
{
	int A, B, C;
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	C = A;
	A = B;
	B = C;
	printf("A = %d \nB = %d", A, B);
}

