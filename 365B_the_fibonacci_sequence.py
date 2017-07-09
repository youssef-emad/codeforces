n = int(raw_input())
values = map(int, raw_input().split())
if n == 1:
    print 1
elif n == 2:
    print 2
else:
    fib_array = [0] * n
    fib_array[0] = 1
    fib_array[1] = 2
    for i in range(2,n):
        if (values[i] == (values[i - 1] + values[i - 2])) and fib_array[i - 1] != 0:
            fib_array[i] = fib_array[i - 1] + 1
        elif (values[i] == (values[i - 1] + values[i - 2])) and fib_array[i - 1] == 0:
            fib_array[i] = 3
        else:
            fib_array[i] = 0
    print max(fib_array)