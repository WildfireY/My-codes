#include <stdio.h>
/*Efetuar a leitura de três valores inteiros desconhecidos, somar os valores fornecidos e apresentar o resultado
somente se for maior ou igual a 100.*/

void main()
{
	int soma,n1,n2,n3;
	printf("digite um numero");
	scanf("%d", & n1);
	printf("digite um numero");
	scanf("%d", & n2);
	printf("digite um numero");
	scanf("%d", & n3);
	soma = n1 + n2 + n3;
	if (soma >= 100)
	{
		printf("%d", soma);
	}
}

