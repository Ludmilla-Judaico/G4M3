testes = int(input())
for i in range(testes):
    tam = int(input())
    string = input()

    l = r = 0;
    yes = 0
    e = False
    while(r < tam-1 and l < tam-1):
        #print(f"l : {l}")
        #print(f"r : {r}")
        if(string[r] == 'y' and e):
            False
        elif(string[r] == 'y'):
            l = r
            e = False
            #print("l vai para r")
        elif(string[r] == 'e'):
            e = True
            #print("r achou e")

        if(string[l] == 'y'):
            r+=1
            #print("l é y, então r anda")
        else:
            l+=1
            #print("l não é y, então l anda")

        if(string[l] == 'y' and e and string[r] == 's'):
            yes+=1
            e = False
            l = r
            #print("achou yes")
    print(yes)
