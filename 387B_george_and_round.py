n,m = map(int, raw_input().split())
n_values = map(int, raw_input().split())
m_values = map(int, raw_input().split())
count = 0
for i in n_values:
    cant_solve = True
    for j in m_values:
        if j >= i:
            cant_solve = False
            m_values.remove(j)
            break
    if cant_solve:
        count += 1
print count