import random


def gerar_lista_numeros(qtd):
  return [random.randint(1, 100) for _ in range(qtd)]


def exibir_lista(lista):
  print("Números gerados:", lista)


quantidade = int(input("Digite a quantidade de números a serem gerados: "))
numeros = gerar_lista_numeros(quantidade)
exibir_lista(numeros)