import random
import time
import heapq


def gerar_lista_numeros(qtd):
    return [random.randint(1, 100) for _ in range(qtd)]


def exibir_lista(lista):
    print("Números gerados:", lista)


def heap_sort(arr):
    heapq.heapify(arr)
    return [heapq.heappop(arr) for _ in range(len(arr))]


def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    meio = len(arr) // 2
    esquerda = merge_sort(arr[:meio])
    direita = merge_sort(arr[meio:])
    return merge(esquerda, direita)


def merge(esquerda, direita):
    resultado = []
    i = j = 0
    while i < len(esquerda) and j < len(direita):
        if esquerda[i] < direita[j]:
            resultado.append(esquerda[i])
            i += 1
        else:
            resultado.append(direita[j])
            j += 1
    resultado.extend(esquerda[i:])
    resultado.extend(direita[j:])
    return resultado


quantidade = int(input("Digite a quantidade de números a serem gerados: "))
numeros = gerar_lista_numeros(quantidade)
exibir_lista(numeros)

inicio_heap = time.time()
numeros_heap = heap_sort(numeros[:])
fim_heap = time.time()

inicio_merge = time.time()
numeros_merge = merge_sort(numeros[:])
fim_merge = time.time()

print("Lista ordenada (Heap Sort):", numeros_heap)
print("Lista ordenada (Merge Sort):", numeros_merge)
print(
    f"Tempo de execução Heap Sort: {(fim_heap - inicio_heap) * 1000:.6f} ms"
)
print(
    f"Tempo de execução Merge Sort: {(fim_merge - inicio_merge) * 1000:.6f} ms"
)