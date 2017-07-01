from math import pow
def function(n,x,y):
    numbers = []
    numbers = [x-y,x,y]
    c = (n - 3)/3
    return int(pow(-1,c + 1)*numbers[n%3])%(1000000007)
x,y = map(int, raw_input().split())
n = int(raw_input())
print function(n,x,y)