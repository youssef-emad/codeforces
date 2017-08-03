brackets = list(raw_input())
unregular = 0
n = len(brackets)
current_length = 0
for i in range(n):
    if brackets[i] ==  '(':
        unregular += 1
    elif brackets[i] ==  ')':
        unregular -= 1
    if unregular < 0:
        brackets[i] = ""
        unregular = 0
unregular = 0
for i in range(n):
    if brackets[n - i - 1] ==  ')':
        unregular += 1
    elif brackets[n - i - 1] ==  '(':
        unregular -= 1
    if unregular < 0:
        brackets[n - i - 1] = ""
        unregular = 0
count = 0
for bracket in brackets:
    if bracket != "":
        count += 1
print count