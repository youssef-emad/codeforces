def is_sorted(numbers):
    return all(numbers[i] <= numbers[i+1] for i in xrange(len(numbers)-1))

def reverse_list(numbers,start,end):
    temp = numbers[start:end + 1]
    temp.reverse()
    numbers[start:end + 1] = temp

def find_start(numbers):
    for j in range(1,len(numbers)):
        if numbers[j - 1] > numbers[j]:
            return j - 1

def find_last(numbers,second_index):
    for j in range(second_index + 1 ,len(numbers)):
        if numbers[j - 1] > numbers[j]:
            second_index += 1
        else:
            break
    return second_index

def check_segment(numbers):
    if(is_sorted(numbers)):
        print "yes"
        print 1
        print 1
    else:
        first_index =  find_start(numbers)
        second_index = find_last(numbers,first_index + 1)
        reverse_list(numbers,first_index,second_index)
        if(is_sorted(numbers)):
            print "yes"
            print first_index + 1
            print second_index + 1
        else:
            print "no"

length = int(raw_input())
numbers = map(int, raw_input().split())

check_segment(numbers)