Algoritmo "exercicio4"
// Fazer um algoritmo para calcular o salário líquido de um empregado onde são dados os seguintes valores

Var
   sb, des, ad, resultado: real

Inicio

   escreval("Digite o salário bruto:")
   leia(sb)
   escreval("Digite os descontos:")
   leia(des)
   escreval("Digite os adicionais:")
   leia(ad)

   resultado <- sb+des+ad

   escreval("Seu salário líquido eh:", resultado)

Fimalgoritmo