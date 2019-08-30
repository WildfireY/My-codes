#include <stdio.h>
//f) Ler cinco valores numéricos inteiros, identificar e apresentar o maior e o menor valores informados. 
void main()
{
	int n1, n2, n3, n4, n5, maior, menor;
	printf("Digite numero 1: ");
	scanf("%d", &n1);
	maior = n1;
	menor = n1;
	printf("Digite numero 2: ");
	scanf("%d", &n2);
	if (n2 > maior)
	{
		maior = n2;
	}
	if (n2 < menor)
	{
		menor = n2;
	}
	printf("Digite numero 3: ");
	scanf("%d", &n3);
	if (n3 > maior)
	{
		maior = n3;
	}
	if (n3 < menor)
	{
		menor = n3;
	}
	printf("Digite numero 4: ");
	scanf("%d", &n4);
	if (n4 > maior)
	{
		maior = n4;
	}
	if (n4 < menor)
	{
		menor = n4;
	}
	printf("Digite numero 5: ");
	scanf("%d", &n5);
	if (n5 > maior)
	{
		maior = n5;
	}
	if (n5 < menor)
	{
		menor = n5;
	}
	printf("Maior valor digitado: %d \nMenor valor digitado: %d", maior, menor);
}
