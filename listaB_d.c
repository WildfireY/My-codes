#include <stdio.h>
/*d) Ler dois valores para as vari�veis A e B e efetuar a troca dos valores de forma que a vari�vel A passe a possuir
o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. Apresentar os valores ap�s a efetiva��o
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

