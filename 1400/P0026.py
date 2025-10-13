linhas, colunas = map(int, input().split())

matriz = []
for i in range(linhas):
    linha = input()
    matriz.append(linha)

nova_matriz = []
for j in range(colunas):
    nova_linha = ''
    for i in range(linhas):
        nova_linha += matriz[i][j]
    nova_matriz.append(nova_linha)

for elem in nova_matriz:
    print(elem)
