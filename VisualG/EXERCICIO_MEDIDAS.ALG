Algoritmo "exercicio_medidas"

Var

    A , B, C , areaQuadrado , areaTriangulo , areaTrapezio : real

Inicio

     escreva("Digite a medida A:")
     leia(A)
     escreva ("Digite a medida B:")
     leia (B)
     escreva ("Digite a medida C:")
     leia (C)
     
     areaQuadrado <- A * A
     areaTriangulo <- (A * B) /2
     areaTrapezio <- ((A + B)*C)/2
     
     escreval ("Area do Quadrado = ", areaQuadrado:6:4)
     escreval ("Area do Triangulo Retangulo = ", areaTriangulo:6:4)
     escreval ("Area do Trapezio = ", areaTrapezio:6:4)
Fimalgoritmo