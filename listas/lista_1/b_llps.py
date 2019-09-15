string = input()

if (len(string) > 10):
    exit()

bigger = max(list(string))

print(bigger * string.count(bigger))
