from scipy.sparse import csr_matrix

# Lista fornecida
matriz = [
    [0, 0, 3, 0],
    [0, 0, 0, 4],
    [0, 0, 0, 5],
    [0, 0, 1, 0]
]

# Criando a matriz esparsa do tipo CSR
sparse_matrix = csr_matrix(matriz)

print("Matriz Esparsa:\n", sparse_matrix)
print("Array Denso:\n", sparse_matrix.toarray())