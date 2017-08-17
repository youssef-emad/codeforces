def getCombinations(array,k):
    new_array = []
    for i in xrange(k):
        new_array.append(0)

    return getCombinationsUtil(array,0,new_array,0,k)

def getCombinationsUtil(array,array_index,current_combo, current_combo_index,k):
    if current_combo_index == k:
        return [current_combo[:]]

    if array_index >= len(array):
        return []
    current_combo[current_combo_index] = array[array_index]
    comb1 = getCombinationsUtil(array,array_index+1,current_combo,current_combo_index+1,k)
    comb2 = getCombinationsUtil(array,array_index+1,current_combo,current_combo_index,k)
    return comb1 + comb2

n, l, r, x = map(int, raw_input().split())
values = map(int, raw_input().split())
values.sort()
combinations = []
count = 0
for i in range(2, n + 1):
    combs = getCombinations(values, i)
    for comb in combs:
        combinations.append(comb)

for combination in combinations:
    summ = sum(combination)
    size = len(combination)
    if summ >= l and summ <= r and combination[size - 1] - combination[0] >= x:
        count += 1
print count