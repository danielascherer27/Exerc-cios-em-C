Algoritmo "exercicio12"
// Escreva um algoritmo para calcular e apresentar o valor do volume de uma lata de óleo

Var
 v, r, h: real
Inicio
      escreval("Digite o raio da lata de oleo em cm:")
      leia(r)
      escreval("Digite a altura da lata de oleo em cm:")
      leia(h)
      
      v <- 3,14159 * (r*r) * h
      
      escreval("O volume da lata eh:", v, " cm3" )

Fimalgoritmo