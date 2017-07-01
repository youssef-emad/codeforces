def is_sorted(numbers):
    return all(numbers[i] <= numbers[i+1] for i in xrange(len(numbers)-1))

def find_start(numbers):
    for j in range(1,len(numbers)):
        if numbers[j - 1] > numbers[j]:
            return j 

def find_last(numbers,second_index):
    for j in range(second_index + 1,len(numbers)):
        if numbers[j - 1] <= numbers[j]:
            second_index += 1
        else:
            break
    return second_index

def check_rotation(numbers,n):
    if(is_sorted(numbers)):
        print 0
    else:
        first_index =  find_start(numbers)
        second_index = find_last(numbers,first_index)
        if(second_index != n - 1):
            print - 1
        elif(numbers[n - 1] <= numbers[0]):
            print n - first_index
        else:
            print -1
n = int(raw_input())
numbers = map(int, raw_input().split())
check_rotation(numbers,n)