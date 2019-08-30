#include <stdio.h>
// Calcula a média do número de trabalhos desejados.
void main()
{
	int trabalho, nota, cont, somaNota, media;
	// Captura o número de trabalhos realizados.
	printf("Digite o numero de trabalhos realizados: ");
	scanf("%d", &trabalho);
	// Repete o trecho até que o contador seja menor ou igual ao número de trabalhos realizados.
	for(cont = 1; cont <= trabalho; cont ++)
	{
		printf("Nota do trabalho %d: ", cont);
		scanf("%d", &nota);
		// Faz a soma das notas.
		somaNota += nota;
	}
	// Faz o calculo da média e exibe na tela.
	media = somaNota / trabalho;
	printf("Sua media eh: %d", media);
}
