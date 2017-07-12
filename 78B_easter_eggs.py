n = int(raw_input())
colors = ['R','O','Y','G','B','I','V']
shifted_colors = [['G'],['G','B'],['O','Y','G'],['R','O','Y','G'],['R','O','Y','G','B'],
                  ['R','O','Y','G','B','I'],['R','O','Y','G','B','I','V']]
result = ""
remaining = n%7
output = []
for i in range(n - remaining):
    output.append(colors[i%7])
for i in range(remaining):
    output.append(shifted_colors[remaining - 1][i])
for out in output:
    result += out
print result