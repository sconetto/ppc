n = int(input())
times = []
for i in range(n):
    h, m = input().split(' ')
    times.append(h + ':' + m)

biggest = 0
repeated = list(set(times))
for i in repeated:
    if (times.count(i) > biggest):
        biggest = times.count(i)

print(biggest)
