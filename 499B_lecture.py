n,m = map(int, raw_input().split())
dictionary = {}
for i in range(0,m):
    words = raw_input().split()
    dictionary[words[0]] = min(words, key=len)
sentence = raw_input().split()
result = ""
for i in range(0,n):
    result += dictionary[sentence[i]] + " "
print result