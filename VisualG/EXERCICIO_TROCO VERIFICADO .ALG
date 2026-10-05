Algoritmo "exercicio_troco verificado "

Var

     preco , troco, dinheiroRecebido, valorTotal, aindaFalta : real
     quantidade : inteiro

Inicio

   escreva ("Preço unitario do produto: ")
       leia (preco)
   escreva ("Quantidade Comprada: ")
       leia (quantidade)
   escreva ("Dinheiro Recibido: ")
       leia (dinheiroRecebido)

        valorTotal <- preco * quantidade
        troco <- dinheiroRecebido - valorTotal
        aindaFalta <- valorTotal - dinheiroRecebido

    se dinheiroRecebido >= valorTotal entao
       escreval ("Troco = R$ ", troco:4:2)
       
       senao
             escreval ("Ainda falta R$: ", aindaFalta:4:2 )
       
      fimse
       
       
Fimalgoritmo
