print ("Exemplo de vetor de numeros inteiros\n\n")
vetor = []
TAM = 5 
   
#rotina que o usuario digita TAM numeros inteiros
for i in range (TAM):
    numero = input("Digite um numero inteiro: ")
    vetor.append(numero)

print ("Numeros: ", end=" ")
for i in range(TAM):
    print (vetor[i], end=" ")