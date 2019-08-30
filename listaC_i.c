#include <stdio.h>

void main()
{
	char nome[15], sexo;
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Qual seu sexo? M/F: ");
	fflush(stdin);
	scanf("%c", &sexo);
	switch(sexo)
	{
		case 'M' :
			printf("llmo, Sr. %s", nome);
			break;
		case 'm' :
			printf("llmo, Sr. %s", nome);
			break;
		case 'F' :
			printf("llma, Sra. %s", nome);
			break;
		case 'f' :
			printf("llma, Sra. %s", nome);
			break;
		default:
			printf("Sexo informado invalido");
	}
}
