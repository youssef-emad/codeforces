string = raw_input()
n = len(string)
count = 0
indeces = [i for i in range(len(string)) if string.startswith('bear', i)]
start = 0
for index in indeces:
    count += (index - start + 1) * (n - index - 3)
    start = index + 1
print count