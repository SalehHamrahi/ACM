#b3
a = input()
t = 0
b = 0
for i in range(len(a)):
    t += int(a[i])

for i in range(1,t):
    b += i

print(b)