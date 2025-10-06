usadas = input()
usadas = usadas.upper()
frequencia = {}

for elem in usadas:
    if elem in frequencia.keys():
        frequencia[elem] += 1
    else:
        frequencia[elem] = 1

maior = usadas[0]
for elem in frequencia.keys():
    if (frequencia[elem] > frequencia[maior]):
        maior = elem

maiores = [maior]
for elem in frequencia.keys():
    if not(elem == maior):
        if(frequencia[elem] == frequencia[maior]):
            maiores.append(elem)

ordem = maiores[0]
if(len(maiores) > 1):
    for i in range(len(maiores)):
        if(ord(maiores[i]) < ord(ordem)):
            ordem = maiores[i]
    print(ordem)
else:
    print(ordem)