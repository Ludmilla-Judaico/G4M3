blocos = []
for i in range(5):
    b = int(input())
    blocos.append(b)

menor = blocos[1]
for elem in blocos:
    if (elem <= menor):
        menor = elem

soma = 0

for elem in blocos:
    if(elem == menor):
        continue
    else:
        dif = (elem - menor)
        soma += dif
print(soma)