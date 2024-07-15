Algoritmo "exercicio18"
Var
   t1, t2, pTermo, i: inteiro

Inicio
   escreval("Digite o primeiro termo:")
   leia(t1)
   escreval("Digite o segundo termo:")
   leia(t2)

   Para i de 3 ate 7 faca
      pTermo <- t1 + t2
      Escreva(pTermo)
      t1 <- t2
      t2 <- pTermo
   FimPara
FimAlgoritmo