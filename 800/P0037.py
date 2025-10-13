def primo(num:int) -> bool:
    contador = 0
    for i in range(1, num+1):
        if(num % i == 0):
            contador += 1
    if(contador > 2):
        return False
    else:
        return True
    
num1, num2 = map(int, input().split())
soma = num1 + num2
if(primo(soma)):
    print('Xau')
else:
    print('Xi')