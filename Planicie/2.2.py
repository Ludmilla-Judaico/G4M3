qntd = int(input())
cont = 0;
for i in range(qntd):
    frase = input()
    fraseup = frase.upper()
    if "FADA" in fraseup:
        cont+=1

print(cont)
