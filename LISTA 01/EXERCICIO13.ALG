Algoritmo "exercicio13"

Var
   pres, valor, taxa, t: Real

Inicio
      escreval("Digite o valor da compra:")
      leia(valor)
      escreval("Digite o valor da taxa:")
      leia(taxa)
      escreval("Digite o valor do tempo das parcelas")
      leia(t)

      pres <- valor + (valor * (taxa / 100) * t)

      escreval("O valor da prestação é:", pres)

Fimalgoritmo
