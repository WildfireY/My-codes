#include <stdio.h>
/*b) Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que
faz 12 quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto e a velocidade média
durante a viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA:= TEMPO*
VELOCIDADE. A partir do valor da distância, basta calcular a quantidade de litros de combustível utilizada na
viagem com a fórmula LITROS_USADOS := DISTANCIA/12. O programa deve apresentar os valores da
velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem. */
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

