def convert_to_binary(n):
    if n // 2 != 0:
        convert_to_binary(n // 2)
    print(n % 2, end='')

# Testando a função
convert_to_binary(202)
