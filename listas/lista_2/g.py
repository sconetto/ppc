n = int(input())
rat = []
womanchild = []
man = []
captain = []
for _ in range(n):
    name, status = input().split(' ')
    if (status == 'rat'):
        rat.append(name)
    elif (status == 'woman' or status == 'child'):
        womanchild.append(name)
    elif (status == 'man'):
        man.append(name)
    else:
        captain.append(name)
names = rat + womanchild + man + captain
for name in names:
    print(name)
