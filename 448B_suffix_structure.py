def check_auto(s,t):
    size = len(s)
    counter = 0
    for i in range(size):
        if s[i] == t[counter]:
            counter += 1
            if (counter == len(t)):
                 return True
    return False

s = raw_input()
t = raw_input()

t_map = {}
s_map = {}

need_tree =  False
array = [True] * 26 

auto = check_auto(s,t)
if auto and s != t:
    print "automaton"
else:    
    for letter in t:
        t_map[letter] = t.count(letter)
        s_map[letter] = 0

    for letter in s:
        s_map[letter] = s.count(letter)

    for letter in t_map.keys():
        if t_map[letter] > s_map[letter]:
            need_tree = True
            break
        elif t_map[letter] != s_map[letter]:
            array[ord(letter) - 97] = False
            
    for letter in s_map.keys():
        if letter not in t_map.keys():
            array[ord(letter) - 97] = False

    if(need_tree):
        print "need tree"
    elif all(i == True for i in array):
        print "array"
    else:
        print "both"