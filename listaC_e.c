#include <stdio.h>
//E, H, J 
//e) Fazer a leitura de 4 valores numéricos inteiros. Apresentar apenas os valores que sejam divisíveis por 2 e 3.

void main ()
{
	int n1, n2, n3, n4, divi2, divi3, d1, d2, d3, d4;
	printf("Digite numero 1: ");
	scanf("%d", &n1);
	divi2 = n1 % 2;
	divi3 = n1 % 3;
	//se o resto da divisão for igual de divi2 e divi3, atribui o valor de n1 para d1
	if (divi2 == 0 && divi3 == 0)
	{
		d1 = n1;
	}
	printf("Digite numero 2: ");
	scanf("%d", &n2);
	divi2 = n2 % 2;
	divi3 = n2 % 3;
	if (divi2 == 0 && divi3 ==0)
	{
		d2 = n2;
	}
	printf("Digite numero 3: ");
	scanf("%d", &n3);
	divi2 = n3 % 2;
	divi3 = n3 % 3;
	if (divi2 == 0 && divi3 ==0)
	{
		d3 = n3;
	}
	printf("Digite numero 4: ");
	scanf("%d", &n4);
	divi2 = n4 % 2;
	divi3 = n4 % 3;
	if (divi2 == 0 && divi3 ==0)
	{
		d4 = n4;
	}
	printf("Numeros divisiveis por 2 e 3: " );
	//se d1 for diferente de 0, escreve na tela
	if (d1 != 0 && d1 != 1)
	{
		printf("%d, ", d1);
	}
	if (d2 != 0&& d2 != 1)
	{
		printf("%d, ", d2);
	}
	if (d3 != 0&& d3 != 1)
	{
		printf("%d, ", d3);
	}
	if (d4 != 0 && d4 != 1)
	{
		printf("%d, ", d4);
	}
}
