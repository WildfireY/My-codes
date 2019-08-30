#include <stdio.h>
/* a) Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão
é F:=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */
void main()
{
	float F, C;
	printf("Digite um valor em graus Celsius: ");
	scanf("%f", &C);
	F = ( 9 * C + 160 ) / 5;
	printf("\nFahrenheit: %.1f", F);
}
