m = raw_input()
m = list(m)
words = [0]* 26
odd_count = 0
for letter in m:
    words[ord(letter) - 97] += 1
for count in words:
    if count %2 != 0:
        odd_count += 1
if odd_count > 1 and len(m)%2 == 0:
    print "Second"
else:
    print "First"