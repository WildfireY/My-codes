#include <stdio.h>
/*c) Efetuar o c�lculo e apresentar o valor de uma presta��o de um bem em atraso, utilizando a f�rmula
PRESTA��O:=VALOR + (VALOR*(TAXA/100)*TEMPO). */
void main()
{
	float prestacao, valor, taxa, tempo;
	printf("Digite o valor: ");
	scanf("%f", &valor);
	printf("Digite o tempo de atraso: ");
	scanf("%f", &tempo);
	printf("Digite a taxa: ");
	scanf("%f", &taxa);
	prestacao = valor + (valor * (taxa / 100 ) * tempo);
	printf("O valor da prestacao eh de R$%.2f", prestacao);
}

