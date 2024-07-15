Algoritmo "exercicio10"
//  Construa um algoritmo que, tendo como dados de entrada dois pontos

Var
   x1, x2,y1, y2, distancia: real

Inicio

    escreval("Digite x1:")
    leia(x1)
    escreval("Digite x2:")
    leia(x2)
    escreval("Digite y1:")
    leia(y1)
    escreval("Digite y2:")
    leia(y2)
 
    distancia <- raizq((x2+x1)^2)+((y2-y1)^2)
 
    escreval("A distancia dos dois pontos eh", distancia: 5:2)

Fimalgoritmo