word = raw_input()
inserted_count = int(raw_input())
values = map(int, raw_input().split())
maximum = max(values)
result = 0
order = 1
for i in word:
    result += order * values[ord(i) - 97]
    order += 1
for i in range(inserted_count):
    result += order * maximum
    order += 1
print result