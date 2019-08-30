#include <stdio.h>
// O programa realiza 2 calculos de média, e pergunta se o professor deseja continuar.
void main()
{
	int nota1, nota2, media, cont;
	char resp, valida;
	do
	{
		// Repete o calculo de média duas vezes.
		for(cont = 1;cont <= 2;cont ++)
		{
			// Caso o professor digite um número inválido, o trecho Nota1 se repete.
			do
			{
				printf("Nota do primeiro bimestre: ");
				scanf("%d", &nota1);
			}while(nota1 < 0 || nota1 > 10);
			// Caso o professor digite um número inválido, o trecho Nota2 se repete.
			do
			{
				printf("Nota do segundo bimestre: ");
				scanf("%d", &nota2);
			}while(nota2 < 0 || nota2 > 10);
			media = (nota1 + nota2) / 2;
			printf("Media do aluno %d\n", media);
		}
		// Garante que a resposta seja apenas "S/N" e "s/n".
		do
		{
			printf("Professor ja cansou? [S/N] ");	
			fflush(stdin);
			scanf("%c", &resp);
			switch(resp)
			{
				case 's':
					valida = 's';
					break;
				case 'S':
					valida = 's';
					break;
				case 'n':
					valida = 's';
					break;
				case 'N':
					valida = 's';
					break;
				default:
					valida = 'n';
					printf("Resposta incorreta\n");
			}
		}while(valida == 'n');
	}while(resp == 'n' || resp == 'N');
	printf("Hora de descansar");
}

