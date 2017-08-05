n = int(raw_input())
values = map(int, raw_input().split())
found = [0] * 100010
positions = [[] for y in range(100010)] 
index = 0
output = []
for value in values:
    positions[value].append(index)
    found[value] += 1
    index += 1
values_set = sorted(set(values))
for value in values_set:
    if found[value] ==  1:
        output.append((value, 0))
    elif found[value] == 2:
        output.append((value, positions[value][1] -  positions[value][0]))
    else:
        constant_difference = True
        difference = positions[value][1] - positions[value][0]
        for i in range(1, len(positions[value]) - 1):
            if positions[value][i + 1] - positions[value][i]  != difference:
                constant_difference = False
                break
        if constant_difference:
            output.append((value, difference))
print len(output)
for out in output:
    print out[0], out[1]