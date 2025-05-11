#b3

#a: عدد موردنظر
#t: مجموع ارقام عدد
#b: تعداد بازی های موردنیاز
a = input()
t = 0
b = 0

#مجموع ارقام عدد
for i in range(len(a)):
    t += int(a[i])

#حساب کردن بازی های مورد نیاز
for i in range(1,t):
    b += i

#خروجی
print(b)