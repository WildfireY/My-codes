#include <stdio.h>
// Calcula a m�dia do n�mero de trabalhos desejados.
void main()
{
	int trabalho, nota, cont, somaNota, media;
	// Captura o n�mero de trabalhos realizados.
	printf("Digite o numero de trabalhos realizados: ");
	scanf("%d", &trabalho);
	// Repete o trecho at� que o contador seja menor ou igual ao n�mero de trabalhos realizados.
	for(cont = 1; cont <= trabalho; cont ++)
	{
		printf("Nota do trabalho %d: ", cont);
		scanf("%d", &nota);
		// Faz a soma das notas.
		somaNota += nota;
	}
	// Faz o calculo da m�dia e exibe na tela.
	media = somaNota / trabalho;
	printf("Sua media eh: %d", media);
}
