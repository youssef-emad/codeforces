result = []
counter = {'A': 0, 'B': 0, 'C': 0}

def print_result(result):
    res = ""
    for r in result:
        res += r
    print res

for i in range(3):
    inp = raw_input()
    if inp[1] == '<':
        counter[inp[2]] += 1
    else:
        counter[inp[0]] += 1
number_of_ones = 0
for value in counter.values():
    if value == 1:
        number_of_ones += 1
if number_of_ones > 1:
    print "Impossible"
else:
    print_result(sorted(counter, key=counter.get))