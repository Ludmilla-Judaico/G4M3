testes, cidades = map(int, input().split())

for i in range(testes):
    contador = 0
    delays = input().split()
    for i in range(len(delays)):
        delays[i] = int(delays[i])
    for i in range(len(delays)):
        if(i == 0):
            continue
        if not(delays[i] > delays[0]):
            if(delays[0] - delays[i] <= 2):
                contador += 1
    print(contador)