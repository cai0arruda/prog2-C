import random

def max_crossing_sum(arr, left, mid, right):
    soma_esq = float('-inf')
    soma = 0
    for i in range(mid, left - 1, -1):
        soma += arr[i]
        soma_esq = max(soma_esq, soma)

    soma_dir = float('-inf')
    soma = 0
    for i in range(mid + 1, right + 1):
        soma += arr[i]
        soma_dir = max(soma_dir, soma)

    return soma_esq + soma_dir


def max_subarray_sum(arr, left, right):
    if left == right:
        return arr[left]

    mid = (left + right) // 2

    return max(
        max_subarray_sum(arr, left, mid),
        max_subarray_sum(arr, mid + 1, right),
        max_crossing_sum(arr, left, mid, right)
    )


# Entrada do usuário para quantidade de números
qtd = int(input("Digite a quantidade de números a serem gerados: "))

# Geração de números aleatórios entre -10 e 10
A = [random.randint(-10, 10) for _ in range(qtd)]
print("Números gerados:", A)

resultado = max_subarray_sum(A, 0, len(A) - 1)
print("Maior soma de subsequência contígua:", resultado)
