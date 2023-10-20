import random


def swap_obj(obj1, obj2):
    return obj2, obj1


def refill_ara(ara_rar):
    global ara
    if ara_rar < 0:
        print("The size of the array cannot be negative")
    else:
        ara = [random.randint(1, 9)]
        for i in range(ara_rar - 1):
            element = random.randint(0, 9)
            ara.append(element)
    return ara


rar1 = int(input("Enter the num 1: "))
rar2 = int(input("Enter the num 1: "))

Max = max(rar1, rar2)
add = 0
sign = 0
change = 0

ara1 = refill_ara(rar1)
ara2 = refill_ara(rar2)
ara3 = []

while change != 1 and change != 2:
    change = int(input("Enter 1 + \nEnter 2 - \nEnter the num: "))

print("1 array:", ara1)
print("2 array:", ara2)

if change == 1:
    for k in range(Max):
        num1 = ara1[rar1 - 1 - k] if rar1 - 1 - k >= 0 else 0
        num2 = ara2[rar2 - 1 - k] if rar2 - 1 - k >= 0 else 0
        num3 = num2 + num1 + add
        if num3 > 9:
            num3 = num3 % 10
            add = 1
        else:
            add = 0
        ara3.append(num3)
    if add != 0:
        ara3.append(add)

else:
    if rar2 > rar1 or ara2[0] > ara1[0]:
        ara1, ara2 = swap_obj(ara1, ara2)
        rar1, rar2 = swap_obj(rar1, rar2)
        sign = 1

    for k in range(Max):
        num1 = ara1[rar1 - 1 - k] if rar1 - 1 - k >= 0 else 0
        num2 = ara2[rar2 - 1 - k] if rar2 - 1 - k >= 0 else 0
        num3 = num1 - num2 - add
        if num3 < 0:
            num3 += 10
            add = 1
        else:
            add = 0
        ara3.append(num3)

ara3.reverse()

print("result:", ara3)
