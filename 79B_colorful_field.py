n, m, k, t = map(int, raw_input().split())
wastes = []
output = ['Grapes', 'Carrots', 'Kiwis']
for i in range(k):
    wastes.append(map(int, raw_input().split()))
for i in range(t):
    inp = map(int, raw_input().split())
    number_of_wastes = 0
    wasteFound = False
    for w in wastes:
        if inp[0] == w[0] and inp[1] ==  w[1]:
            wasteFound = True
            break
        elif inp[0] > w[0] or (inp[0] == w[0] and inp[1] > w[1]):
            number_of_wastes += 1
    if wasteFound:
        print "Waste"
    else:
        position = (inp[0] - 1)* m + inp[1] - number_of_wastes
        print output[position%3]