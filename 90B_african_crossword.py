n,m = map(int , raw_input().split())
n_rows = []
m_cols = []
for i in range(n):
    n_rows.append([0] * 26)
for i in range(m):
    m_cols.append([0] * 26)
word = []
result = ""
for i in range(n):
    inp = raw_input()
    word.append(inp)
    count = 0
    for letter in inp:
        n_rows[i][ord(letter) - 97] += 1
        m_cols[count][ord(letter) - 97] += 1
        count += 1
for i in range(n):
    count = 0
    for letter in word[i]:
        if n_rows[i][ord(letter) - 97] == 1 and m_cols[count][ord(letter) - 97] == 1:
            result += letter
        count += 1
print result