print ("Exemplo de vetor de placas que sao strings\n\n")
vetor = []
TAM = 5
    #rotina que o usuario digita TAM numeros inteiros
for i in range(TAM): 
    placa = input("Digite uma placa: ")

    if placa not in vetor:
        vetor.append(placa)

    
 
    #rotina que o programa exibe os numeros inteiros um depois do outro
print ("Placas: ", end=" ")
for i in vetor:
    print(placa, end=" ")

        