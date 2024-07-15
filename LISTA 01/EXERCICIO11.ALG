Algoritmo "exercicio11"
//Crie um algoritmo para ler uma temperatura em graus Celsius e apresenta-la convertida
//em graus Fahrenheit

Var
   c, f: real

Inicio
      escreval("Escreva a temperatura em Celsius:")
      leia(c)
      
      f <- ((9*c) + 160) / 5
      
      escreval("A temperatura em Fahrenheit eh:", f, " F")

Fimalgoritmo