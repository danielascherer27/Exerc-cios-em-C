#include <stdio.h>
int main(){
  float distancia, tempo, kmH, mS;
  printf("\nDigite a distancia percorrida em Km:");
  scanf("%f", &distancia);
  printf("\nDigite o intervalo de tempo percorrido em horas:");
  scanf("%f", &tempo);
  kmH=distancia/tempo;
  mS= (distancia*1000)/(tempo*3600);
  printf("\nA velocidade media em Km por horas eh: %.2f Km/h\n", kmH);
  printf("\nA velocidade media em metros por segundo eh: %.2f m/s\n", mS);

  return 0;
}