import numpy as np
from scipy.sparse import csr_matrix
import collections

# Texto fornecido
text = "rato roeu a roupa do rei de Roma, o rato roeu a roupa do rei da Rússia, o rato roeu a roupa do RodovaIho..."
matriz = [
    [0, 0, 3, 0],
    [0, 0, 0, 4],
    [0, 0, 0, 5],
    [0, 0, 1, 0]
]
# Separando as palavras e contando a frequência de cada uma
words = text.lower().split()
word_counts = collections.Counter(words)
print("Word Counts: ", word_counts)

# Ordenando as palavras e criando um índice para cada uma
unique_words = list(word_counts.keys())
word_index = {word: i for i, word in enumerate(unique_words)}
print("Word Index: ", word_index)

# Criando as listas de dados, linhas e colunas para a matriz esparsa
data = []
rows = []
cols = []

for word, count in word_counts.items():
    data.append(count)
    rows.append(0)  # Colocamos todas as palavras na primeira linha da matriz
    cols.append(word_index[word])

# Criando a matriz esparsa do tipo CSR
sparse_matrix = csr_matrix((matriz, (rows, cols)), shape=(1, len(unique_words)))
print("Matriz Esparsa de Frequência de Palavras:\n", sparse_matrix)
print("Array Denso:\n", sparse_matrix.toarray())
