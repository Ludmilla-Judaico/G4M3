texto = input()
crip = ""
cont = 0
for i in range(len(texto)):
    if(texto[i] != 'P'):
        cont = 0
        crip += texto[i]
        
    if(texto[i] == 'P' or texto[i] == 'p'):
        cont+=1
        if(cont <= 1):
            crip += texto[i]

print(crip)