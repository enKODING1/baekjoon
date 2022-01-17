num = int(input())
num_len = len(str(num))
total = 0


def add(num_data):
    for i in range(0, num_len-1):
        num_data *= 10
    return num_data


def solve(num_data):
    num1 = add(num_data % 10)
    num2 = num_data//10
    return num1+num2


for i in range(0, num_len):
    num = solve(num)
    total += num

print(total)
