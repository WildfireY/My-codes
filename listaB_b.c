#include <stdio.h>
/*b) Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem, utilizando um autom�vel que
faz 12 quil�metros por litro. Para obter o c�lculo, o usu�rio deve fornecer o tempo gasto e a velocidade m�dia
durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA:= TEMPO*
VELOCIDADE. A partir do valor da dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada na
viagem com a f�rmula LITROS_USADOS := DISTANCIA/12. O programa deve apresentar os valores da
velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a quantidade de litros utilizada na viagem. */
void main()
{
	float tempo, velocidade, distancia, litrosUsados;
	printf("Digite algumas informacoes sobre a viagem\n");
	printf("\nTempo gasto: ");
	scanf("%f", &tempo);
	printf("Velocidade media: ");
	scanf("%f", &velocidade);
	distancia = tempo * velocidade;
	litrosUsados = distancia / 12;
	printf("--------------------------------");
	printf("\nVelocidade media: %.1f \nTempo gasto na viagem: %.1f \nDistancia percorrida: %.1f \nQuantidade de litros utilizada na viagem: %.1f", velocidade, tempo, distancia, litrosUsados);
}

