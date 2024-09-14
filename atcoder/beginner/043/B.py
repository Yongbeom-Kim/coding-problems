s = input()
result = []
for char in s.strip():
    if char == '0' or char == '1':
        result.append(char)
    elif char == 'B' and result:
        result.pop()
print("".join(result))