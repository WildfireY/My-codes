#include <stdio.h>


void main()
{
	int nm1;
	printf("Digite um numero inteiro entre 1 e 9: ");
	scanf("%d", &nm1);
	if (nm1 < 1 || nm1 > 9)
	{
	printf("Esse numero esta fora da faixa permitida");
	}
	else{
		printf("O valor esta na faixa permitida");
	}
}
