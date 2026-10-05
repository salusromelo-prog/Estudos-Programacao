Algoritmo "exercicio_glicose"

Var

     glicose : real

Inicio

     escreva ("Digite a medida da glicose: ")
     leia (glicose)

     se glicose <= 100 entao
         escreval ("Classificaçao: normal")

      senao
            se glicose <= 140 entao
               escreval ("Classificaçao: elevado")

               senao
                  escreval ("Classificaçao: diabetes")

         fimse
     fimse

Fimalgoritmo