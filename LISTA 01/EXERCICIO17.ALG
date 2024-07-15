Algoritmo "exercicio17"
// Faça um algoritmo que leia a idade de uma pessoa expressa em anos

Var
   d, m, a, r: inteiro
   
Inicio
    escreval("Digite sua idade em anos:")
    leia(a)
    
    m<- (a*12)
    d<- (m*365)
    r<-(m+d)
    
    escreval("Sua idade em meses eh:",m)
    escreval("Sua idade em dias eh:", r)
    
Fimalgoritmo