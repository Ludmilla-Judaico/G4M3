import itertools
# testes, tam = map(int, input().split())
# for i in range(testes):
l = [0, 1, 2, 3]
perm = itertools.permutations(l)
for p in perm:
    print(p)