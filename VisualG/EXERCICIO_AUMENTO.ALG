Algoritmo "exercicio_aumento"


Var

    salario , novoSalario , aumento : real
    porcentagem : inteiro

Inicio

       escreva ("Digite o salario da pessoa: ")
       leia (salario)

         se salario <= 1000 entao
          novoSalario <- salario + (salario * 0.20)
           aumento <- (salario * 0.20)
            escreval ("novo salario: R$", novoSalario:7:2)
             escreval ("aumento: R$", aumento:7:2)
              escreval ("porcentagem: 20%")
               
              senao
              
             se salario <= 3000 entao
               novoSalario <- salario + (salario * 0.15)
                aumento <- (salario * 0.15)
                 escreval ("novo salario: R$", novoSalario:7:2)
                  escreval ("aumento: R$", aumento:7:2)
                   escreval ("porcentagem: 15%")

                    senao
                    
             se salario <= 8000 entao
               novoSalario <- salario + (salario * 0.10)
                aumento <- (salario * 0.10)
                 escreval ("novo salario: R$", novoSalario:7:2)
                  escreval ("aumento: R$", aumento:7:2)
                   escreval ("porcentagem: 10%")
                   
                   senao
                   
                   se salario > 8000 entao
               novoSalario <- salario + (salario * 0.05)
                aumento <- (salario * 0.05)
                 escreval ("novo salario: R$", novoSalario:7:2)
                  escreval ("aumento: R$", aumento:7:2)
                   escreval ("porcentagem: 5%")
                   
                   
                fimse
              fimse
            fimse
         fimse
Fimalgoritmo
