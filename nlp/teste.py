texto1 = """O bonde passa cheio de pernas:
pernas brancas pretas amarelas.
Para que tanta perna, meu Deus,
pergunta meu coração.
Porém meus olhos
não perguntam nada."""


texto1 = texto1.replace("\n", " ")
tokens = texto1.split(" ")
print(tokens)

d = {}
for token in tokens:
    if token in d:
        d[token] += 1
    else:
        d[token] = 1
print(d)