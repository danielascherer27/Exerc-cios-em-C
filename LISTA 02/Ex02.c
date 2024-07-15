#include <stdio.h>
int main(){
	int tempo, distancia, velocidade, litrosUsados;
	printf("Informe o tempo gasto da viagem em horas: ");
	scanf("%i", &tempo);
	printf("Informe a velocidade media durante a viagem em Km por hora: ");
	scanf("%i", &velocidade);
	distancia = tempo*velocidade;
	litrosUsados = distancia/12;
	printf("\nA velocidade media da viagem foi de %i km/h.", velocidade);
	printf("\nO tempo gasto na viagem foi de %i horas", tempo);
	printf("\nA distancia percorrida na viagem foi de %i km", distancia);
	printf("\nA quantidade litros gastos na viagem foi de %i L", litrosUsados);

	return 0;
}