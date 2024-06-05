def teste( a : list) -> int:
    soma = 0
    for elemento in a:
        soma += elemento
    return soma


print(teste([10, 20, 30]))