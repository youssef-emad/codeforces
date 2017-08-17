n = int(raw_input())
values = raw_input().split()
result = 0
beautiful_found = False
beauty = '1'
for value in values:
    if value == '0':
        beauty = 0
        break
    elif value == '1':
        continue
    index = value.find('1')
    if not beautiful_found:
        new = value[0:index] + value[index + 1:]
        if int(new) != 0:
            beauty = value
            beautiful_found = True
        else:
            result += (len(value) - index - 1)
    else:
        result += (len(value) - index - 1)
if result == 0 or beauty == 0:
    print beauty
else:
    print beauty + '0'* result