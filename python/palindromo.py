def QuasePalindromo( texto ):
    texto_reverso = texto[::-1]
    caracteres_semelhantes = 0
    for i in range(len(texto)):
        if texto[i] == texto_reverso[i]:
            caracteres_semelhantes += 1
    return caracteres_semelhantes >= (len(texto) - 2)

print(QuasePalindromo("ATA"))
print(QuasePalindromo("ana"))
print(QuasePalindromo("abccbx"))
print(QuasePalindromo("abccba"))
print(QuasePalindromo("abccfg"))
print(QuasePalindromo("antonio"))
print(QuasePalindromo("roma e amox"))