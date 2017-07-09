n = int(raw_input())
word = raw_input()
counter = {}
counter['I'] = 0
counter['F'] = 0
counter['A'] = 0

for letter in word:
    counter[letter] += 1
if counter['I'] > 1:
    print 0
elif counter['I'] == 1:
    print 1
else:
    print counter['I'] + counter['A']