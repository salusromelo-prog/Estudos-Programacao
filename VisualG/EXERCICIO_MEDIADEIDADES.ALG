Algoritmo "exercicio_MediaDeIdades"

Var


      idade, quantidade,  soma  : inteiro
      media : real
  
  
Inicio

      quantidade <- 0
      soma <- 0
     
     escreval("Digite as idades:")
     leia (idade)
        se idade < 0 entao
         escreval ("Impossivel calcular!")
         
         senao

     enquanto idade >= 0 faca

           
        soma <- soma + idade
        quantidade <- quantidade + 1
        media <- soma / quantidade

        leia (idade)



        fimenquanto
        
        escreval("Media = ", media:4:2)
        
        fimse









Fimalgoritmo