num = int(input())
freq = {}

for i in range(num):
    ident, altura = input().split()
    if(altura in freq.keys()):
        freq[altura] += 1
    else:
        freq[altura] = 1

perm = 1
for elem in freq.keys():
    if(freq[elem] > 1):
        while(freq[elem] > 1):
            perm *= freq[elem]
            freq[elem] -= 1

print(perm)