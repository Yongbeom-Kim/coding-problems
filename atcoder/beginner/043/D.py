s = input()
for i in range(len(s)):
    if i < len(s)-1 and s[i] == s[i+1]:
        print(i+1, i+2)
        exit(0)
    if i < len(s)-2 and s[i] == s[i+2]:
        print(i+1, i+3)
        exit(0)

print(-1, -1)