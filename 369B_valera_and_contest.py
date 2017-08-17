n, k, l, r, sall, sk = map(int, raw_input().split())
srem = sall - sk
remainings = []
if n != k:
    value = srem/(n - k)
    sumrem = value * (n - k)
    remainings = [value] * (n - k)
    index = 0
    while sumrem < srem:
        remainings[index] += 1
        index = (index + 1) % (n - k)
        sumrem += 1

main = [sk/k] * k
sumk = (sk/k) * k
index = 0
while sumk < sk:
    main[index] += 1
    index = (index + 1) % k
    sumk += 1
result  = main + remainings
for i in range(n):
    print result[i],