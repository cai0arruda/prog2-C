def para_decimal(numero, base):
    """Converte qualquer base para decimal (base 10) recursivamente"""
    digitos = "0123456789ABCDEF"
    numero = numero.upper()

    if len(numero) == 1:
        return digitos.index(numero)
    else:
        return (digitos.index(numero[0]) * (base ** (len(numero) - 1))) + para_decimal(numero[1:], base)

def de_decimal_para_base(n, base):
    """Converte decimal para qualquer base recursivamente"""
    digitos = "0123456789ABCDEF"
    if n < base:
        return digitos[n]
    else:
        return de_decimal_para_base(n // base, base) + digitos[n % base]

def menu():
    print("\n=== Conversor de Bases com Recursão ===")
    print("Bases disponíveis:")
    print("1 - Binário (base 2)")
    print("2 - Octal (base 8)")
    print("3 - Decimal (base 10)")
    print("4 - Hexadecimal (base 16)")

    opcoes = {
        "1": 2,
        "2": 8,
        "3": 10,
        "4": 16
    }

    origem = input("Escolha a base de origem (1-4): ")
    destino = input("Escolha a base de destino (1-4): ")

    if origem not in opcoes or destino not in opcoes:
        print("Opção inválida!")
        return

    numero = input(f"Digite o número na base {opcoes[origem]}: ")

    try:
        # Primeiro converte para decimal
        decimal = int(numero) if opcoes[origem] == 10 else para_decimal(numero, opcoes[origem])
        # Depois converte para base desejada
        resultado = str(decimal) if opcoes[destino] == 10 else de_decimal_para_base(decimal, opcoes[destino])

        print(f"\n🔁 Resultado: {numero} (base {opcoes[origem]}) = {resultado} (base {opcoes[destino]})\n")
    except Exception as e:
        print(f"Erro na conversão: {e}")

# Executa o programa
if __name__ == "__main__":
    while True:
        menu()
        continuar = input("Deseja converter outro número? (s/n): ").lower()
        if continuar != 's':
            print("Encerrando...")
            break
