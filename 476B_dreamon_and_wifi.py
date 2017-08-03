drazil_string = raw_input()
dreamon_string = raw_input()
drazil_letters = {'+': 0, '-': 0}
dreamon_letters = {'+': 0, '-': 0, '?': 0}
questions = 0
for letter in drazil_string:
    drazil_letters[letter] += 1
for i in range(len(dreamon_string)):
    dreamon_letters[dreamon_string[i]] += 1
    if dreamon_string[i] == '?'and drazil_string[i] == '-':
            questions += 1
if dreamon_letters['?'] == 0 and dreamon_letters['+'] == drazil_letters['+']:
    print "1.0"
elif dreamon_letters['?'] == 0 and dreamon_letters['+'] != drazil_letters['+']:
    print "0"
elif dreamon_letters['+'] > drazil_letters['+'] or dreamon_letters['-'] > drazil_letters['-']:
    print '0'
elif questions == 0 or questions == dreamon_letters['?']:
    print 1.0/(1<<dreamon_letters['?'])
else:
    count = 0
    questions = drazil_letters['-'] - dreamon_letters['-']
    for i in range(1<<dreamon_letters['?']):
        s = bin(i)[2:]
        c = 0
        for l in s:
            if l == '0':
                c += 1
        c += dreamon_letters['?'] - len(s)
        if c == questions:
            count += 1
    print count * 1.0/(1<<dreamon_letters['?'])