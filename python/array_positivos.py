def NumMaisPopular( matrix, size ): 
    if size > 0:
        d = {}
        # passing numbers to dict
        for i in range(0, size): 
            numero = matrix[i]
            if numero in d:
                d[numero] += 1
            else:
                d[numero] = 1
        # print(d)
        greater = 0
        greater_occurrencies = [greater]
        for chave in d.keys():
            occurrency = d[chave]
            if occurrency > greater:
                greater_occurrencies = [chave]
                greater = occurrency
            elif occurrency == greater:
                greater_occurrencies.append(chave)
        # print(greater_occurrencies)
    return min(greater_occurrencies)

print(NumMaisPopular([34, 31,34, 77, 82], 5))
print(NumMaisPopular([22, 101, 102, 101, 102, 525, 88], 7))
print(NumMaisPopular([66], 1))
print(NumMaisPopular([14, 14, 2342, 2342, 2342], 5))