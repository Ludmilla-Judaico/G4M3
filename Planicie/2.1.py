texto = input()
crip = ""
i = 0

while i < len(texto):
    if texto[i] == ' ':
        crip += ' '
        i += 1
    else:
        crip += texto[i + 1]
        i += 2

print(crip)