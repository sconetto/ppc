n = int(input())
if (n < 1 or n > 2000):
    exit()

a = input()
grades = list(map(int, a.rsplit(' ')))
if (any(x > 2000 for x in grades) or any(x < 1 for x in grades)):
    exit()

result = [0 for i in range(len(grades))]
unique = sorted(list(set(grades)), reverse=True)
counter = 1
equal = 0
for i in range(len(unique)):
    for j in range(len(grades)):
        if (grades[j] == unique[i]):
            result[j] = counter
            equal += 1

    counter += equal
    equal = 0

print(str(result).replace('[', '').replace(']', '').replace(',', ''))
