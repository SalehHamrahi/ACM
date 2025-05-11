#a2
a = input()
b = 1
for i in range(len(a)):
    if i+1 < len(a):
        if a[i] > a[i+1]:
            b = 0
    else:
        if a[-1] > a[i]:
            b = 0

print(b)