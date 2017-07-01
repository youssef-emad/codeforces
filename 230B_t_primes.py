def generate_prime_array(n):
    arr = (n+1)*[1]
    m = 2
    for i in range(2,n+1):
        if arr[i] != 0:
            m = 2
            while i*m <= n:
                arr[i*m] = 0
                m = m+1
    return arr

from math import sqrt
def check_t_prime(numbers):
    prime_array = generate_prime_array(int(sqrt(max(numbers))))
    for i in numbers:
        if i == 1 or i == 0:
            print "NO"
        elif sqrt(i).is_integer() and prime_array[int(sqrt(i))] == 1:
            print "YES"
        else:
            print "NO"

length = int(raw_input())
numbers = map(int, raw_input().split())
check_t_prime(numbers)