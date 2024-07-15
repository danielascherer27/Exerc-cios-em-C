Algoritmo "exercicio22"
// Dada uma idade fazer uma algoritmo que a converta em meses e horas

Var

   idadeAno, idadeMes, idadeDia, IdadeHora: real

Inicio
       escreval("Digte sua idade sem considerar ano bisiesto")
      escreval("Digite sua idade em anos")
      leia(idadeAno)
      
      idadeMes <- idadeAno*12
      idadeDia<- idadeMes*30
      idadeHora<-idadeDia*24
      
      escreval("A sua idade em meses eh:", idadeMes, " meses")
      escreval("A sua idade em horas eh:", idadeHora, " horas")

Fimalgoritmo