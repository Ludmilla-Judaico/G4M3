qntd_planetas = int(input())

dias = []
dias = input().split()
for i in range(len(dias)):
    dias[i] = int(dias[i])

# print(dias)

matriz = []
for i in range(qntd_planetas):
    linha = input().split()
    for i in range(len(linha)):
        linha[i] = int(linha[i])

print(linha)