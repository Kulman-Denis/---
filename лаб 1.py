import random

a1 = int(input("enter the num 1: "))
a2 = int(input("enter the num 2: "))

rar1 = [random.randint(1, 9) for _ in range(a1)]
rar2 = [random.randint(1, 9) for _ in range(a2)]
rar3 = []

print("num 1:", rar1)
print("num 2:", rar2)

rem = 0
len1 = a1
len2 = a2

i = len1 - 1
j = len2 - 1

num1 = 0
num2 = 0

while i >= 0 or j >= 0 or rem:

    if i < 0:
        num1 = 0
    else:
        num1 = rar1[i]

    if j < 0:
        num2 = 0
    else:
        num2 = rar2[j]

    rar3.append(int((num1 + num2) + rem) % 10)
    rem = ((num1 + num2) + rem) // 10

    i -= 1
    j -= 1

print("result:", rar3[::-1])
