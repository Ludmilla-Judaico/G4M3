qntd_caixas = int(input())
rotulos = (input().split())
for i in range(qntd_caixas):
    rotulos[i] = int(rotulos[i])

resul = qntd_caixas
um = dois = tres = 0
l = 0 ; r = 0
while(r < qntd_caixas):
    if(rotulos[r] == 1):
        um += 1
    elif(rotulos[r] == 2):
        dois += 1
    if(rotulos[r] == 3):
        tres += 1
    r+=1
    # print(f"r : {r}")
    while(um >= 1 and dois >= 1 and tres >= 1):
        if(r - l < resul):
            resul = r - l
        # print(f"l : {l}")
        if(rotulos[l] == 1):
            um -= 1
        elif(rotulos[l] == 2):
            dois -= 1
        if(rotulos[l] == 3):
            tres -= 1
        l+=1
        
print(resul)