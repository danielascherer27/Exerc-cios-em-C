Algoritmo "exercicio6"
// Faça um algoritmo que leia a largura e comprimento de um terreno e casa

Var
    largTer, compriTer, largCasa, compriCasa, areaLivre: real

Inicio
      escreval("Digite o valor da largura do terreno em metros:")
      leia(largTer)
      escreval("Digite o valor da comprimento do terreno em metros:")
      leia(compriTer)
      escreval("Digite o valor da largura da casa em metros:")
      leia(largCasa)
      escreval("Digite o valor da comprimento da casa em metros:")
      leia(compriCasa)
      
      areaLivre <- (largTer * compriTer) - (largCasa * compriCasa)
      
      escreval("O valor da área livre eh:", areaLivre, " metros")

Fimalgoritmo