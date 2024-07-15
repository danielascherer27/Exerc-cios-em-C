Algoritmo "exercicio8"
// Fazer um algoritmo que leia o tempo de duração de um evento em uma fábrica
// expresso em segundos e mostre-o expresso em horas, minutos e segundos

Var
   tempoEve,exHoras, exMin, ExSeg: real
   
Inicio
      escreval("Digite o tempo de duração do evento em segundos:")
      leia(tempoEve)
      
      exHoras <- tempoEve / 3600
      
      escreval("O tempo do evento em horas é de:", exHoras, " horas")
      
      exMin <- tempoEve / 60
      
      escreval("O tempo do evento em minutos é de:", exMin, " minutos")

      escreval("O tempo do evento em segundo é de:", tempoEve, " segundos")

Fimalgoritmo