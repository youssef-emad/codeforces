from math import sqrt,pow,ceil
def calcDistance(x1,y1,x2,y2):
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2))
numbers = map(int, raw_input().split())
distance = calcDistance(numbers[1],numbers[2],numbers[3],numbers[4])
print int(ceil(distance/(2*numbers[0])))