dances = input().split(' ')
dances = [int(n) for n in dances]
n, m = dances
print((n + m) - 1)
for i in range(1, m + 1):
    print('1 ' + str(i))
for i in range(2, n + 1):
    print(str(i) + ' 1')
