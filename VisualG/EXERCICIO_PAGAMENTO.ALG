Algoritmo "exercicio_pagamento"

Var

   nome : caractere
   horas : inteiro
   valor , pagamento : real

Inicio

   escreva ("Nome:")
   leia(nome)
   escreva ("Valor por hora:")
   leia (valor)
   escreva ("Horas trabalhadas:")
   leia (horas)
   
   pagamento <- horas * valor
   
   escreva ("O pagamento para ", nome, "deve ser de:", pagamento:7:2)

Fimalgoritmo