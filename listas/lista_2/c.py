n = int(input())
ints = input().split(' ')
ints = [int(i) for i in ints]
ints.sort()
total = sum(ints)

while(total % 2 != 0):
    ints = ints[1:]
    total = sum(ints)

print(total)
