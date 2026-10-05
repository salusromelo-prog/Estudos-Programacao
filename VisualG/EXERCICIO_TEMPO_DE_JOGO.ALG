Algoritmo "exercicio_tempo_de_jogo"

Var

    horaInicial , horaFinal , tempoDeJogo : inteiro
    

Inicio


       escreva("Hora inicial: ")
       leia(horaInicial)
       escreva ("Hora final: ")
       leia (horaFinal)
       
       se horaFinal > horaInicial entao
       tempoDeJogo <- horaFinal - horaInicial
       
       senao
       tempoDeJogo <- (24 - horaInicial ) + horaFinal
       
       
       
       fimse
       
       escreval ("O jogo durou : ",tempoDeJogo, " HORAS")















Fimalgoritmo