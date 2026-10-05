Algoritmo "exercicio_retangulo"

Var
   base, altura, area, perimetro, diagonal : real
   


Inicio
    escreva ("Base do retangulo:")
    leia (base)
    escreva ("Altura do retangulo:")
    leia (altura)
    area <- base * altura
    perimetro <- 2*base + 2*altura
    diagonal <- raizQ(Exp(base , 2) + Exp(altura , 2))
    escreval ("Area =", area:8:4)
    escreval ("Perimetro =", perimetro:8:4)
    escreval ("Diagonal =" , diagonal:8:4)
Fimalgoritmo