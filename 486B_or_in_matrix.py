def print_values(values,m,n):
    for i in range(m):
        for j in range(n):
            print values[i][j],
        print " "
        
def compute_col_output(values,m,n):
    out = 1;
    for i in range(m):
        out = out and values[i][n]
    return out

def compute_col_or(values,m,n):
    out = 0
    for i in range(m):
        out = out or values[i][n]
    return out

def calculate_or_matrix(output,calculated,m,n):
    for i in range(m):
        for j in range(n):
            row_calculated = any(output[i])
            col_calculated = compute_col_or(output,m,j)
            if row_calculated or col_calculated:
                calculated[i][j] = 1

m,n = map(int, raw_input().split())
values = []
output = []
calculated = []
for i in range(m):
    values.append(map(int, raw_input().split()))
    output.append([0]*n)
    calculated.append([0]*n)


for i in range(m):
    for j in range(n):
        if values[i][j] ==  1:
            row_output = all(values[i])
            col_output = compute_col_output(values,m,j)
            if row_output and col_output:
                output[i][j] = 1
            else:
                output[i][j] = 0

calculate_or_matrix(output,calculated,m,n)
if calculated == values:
    print "YES"
    print_values(output,m,n)
else:
    print "NO"