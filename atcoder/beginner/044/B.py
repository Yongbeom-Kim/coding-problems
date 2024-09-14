from collections import Counter

s = input()
count = Counter(s)

for freq in count.values():
    if freq%2 == 1:
        print("No")
        exit(0)
print("Yes")
