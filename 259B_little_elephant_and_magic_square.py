def print_values(values):
    for i in range(3):
        for j in range(3):
            print values[i][j],
        print " "
values = []
for i in range(3):
    values.append([])
values[0] = map(int, raw_input().split())
values[1] = map(int, raw_input().split())
values[2] = map(int, raw_input().split())

for i in range(1,pow(10,5) + 1):
    values[0][0] = i
    values[1][1] = 0
    values[2][2] = 0
    first_row_sum = sum(values[0])
    values[1][1] = abs(sum(values[1]) - first_row_sum)
    values[2][2] = abs(sum(values[2]) - first_row_sum)
    
    first_col_sum = 0
    second_col_sum = 0
    third_col_sum = 0
    diagonal_sum = 0
    
    for j in range(3):
        first_col_sum += values[j][0]
        second_col_sum += values[j][1]
        third_col_sum += values[j][2]
        diagonal_sum += values[j][j]
        
    if (first_col_sum == second_col_sum and second_col_sum == third_col_sum 
        and third_col_sum == diagonal_sum   and values[0][0] != 0 and values[1][1] != 0 and values[2][2] != 0):
        print_values(values)
        break