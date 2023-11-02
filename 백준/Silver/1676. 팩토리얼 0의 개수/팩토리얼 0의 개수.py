def factorial(n):
    if n == 0:
        return 1
    else:
        return factorial(n - 1) * n

n = int(input())
count = 0
facstr = str(factorial(n))
for i in range(len(facstr) - 1, -1, -1):
    if facstr[i] != '0':
        print(count)
        break
    else:
        count += 1