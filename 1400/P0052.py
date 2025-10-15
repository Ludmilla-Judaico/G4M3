retalhos = int(input())
cores = input()
freq = {}
l = r = 0
maior = 0
while(r < retalhos):
    if(cores[r] not in freq.keys()):
        freq[cores[r]] = 1
    else:
        freq[cores[r]] += 1
    r+=1
    # print(f"r: {r}")
    # print(f"l: {l}")
    # print(freq)
    while(len(freq) > 2):
        if(freq[cores[l]] > 1):
            freq[cores[l]] -= 1
        else:
            del freq[cores[l]]
        l+=1
    if(abs(r-l) > maior):
        maior = abs(r-l)
print(maior)