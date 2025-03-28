import random
import time


def gerar_lista_numeros(qtd):
  return [random.randint(1, 100) for _ in range(qtd)]


def exibir_lista(lista):
  print("Números gerados:", lista)


def bubble_sort(arr):
  n = len(arr)
  for i in range(n):
    for j in range(0, n - i - 1):
      if arr[j] > arr[j + 1]:
        arr[j], arr[j + 1] = arr[j + 1], arr[j]
  return arr


def quick_sort(arr):
  if len(arr) <= 1:
    return arr
  pivot = arr[len(arr) // 2]
  left = [x for x in arr if x < pivot]
  middle = [x for x in arr if x == pivot]
  right = [x for x in arr if x > pivot]
  return quick_sort(left) + middle + quick_sort(right)


quantidade = int(input("Digite a quantidade de números a serem gerados: "))
numeros = gerar_lista_numeros(quantidade)
exibir_lista(numeros)

inicio_bubble = time.time()
numeros_bubble = bubble_sort(numeros[:])
fim_bubble = time.time()

inicio_quick = time.time()
numeros_quick = quick_sort(numeros[:])
fim_quick = time.time()

print("Lista ordenada (Bubble Sort):", numeros_bubble)
print("Lista ordenada (Quick Sort):", numeros_quick)
print(
    f"Tempo de execução Bubble Sort: {(fim_bubble - inicio_bubble) * 1000:.6f} ms"
)
print(
    f"Tempo de execução Quick Sort: {(fim_quick - inicio_quick) * 1000:.6f} ms"
)