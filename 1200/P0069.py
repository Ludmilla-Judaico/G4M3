#Complexidade : O(sqrt(n))
import math
num = int(input())

x1 = x2 = True
for i in range(2, math.ceil((num-1)**0.5)+1):
    if((num-1)%i == 0):
        x1 = False

for i in range(2, math.ceil((num+1)**0.5)+1):
    if((num+1)%i == 0):
        x2 = False

print(f"{num} TIA") if (x1 and x2) else print(f"{num} NAH")